#include <iostream>
#include <string>   
using namespace std;


int main() {
    int t{};
    cin>>t;
    string in_word[t];
    for(int n{}; n<t;n++){
        cin>>in_word[n];
    }
    for(int n{};n<t;n++){
        if(in_word[n].length()>10){
            cout<<in_word[n][0]<<in_word[n].length()-2<<in_word[n][in_word[n].length()-1]<<"\n";
        }
        else{
            cout<<in_word[n]<<"\n";
        }
    }
    
}