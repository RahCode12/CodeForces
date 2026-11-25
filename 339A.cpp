#include <bits/stdc++.h>
using namespace std;


int main() {
    char input[100]{};
    vector <int> hash;
    cin>>input;
    int size =strlen(input);
    int i{};

    for(int i{}; i<size;i+=2){
        int number = input[i]%48;
        hash.push_back(number);
    }
    sort(hash.begin(),hash.end());
    for(int i{}; i<size; i++){
        if(i%2==0){
            cout<<hash[i/2];
        }
        else{
            cout<<"+";
        }
    }
    return 0;
}