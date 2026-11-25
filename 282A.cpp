#include <iostream>
using namespace std;

int main() {
    int t{};
    cin>>t;
    string operation[t];
    int x{};
    for(int n{};n<t;n++){   
        cin>>operation[n];
    }
    for(int n{};n<t;n++){   
        if(operation[n] == "X++" || operation[n] == "++X"){
            x++;
        }
        else{
            x--;
        }
        
}
    cout<<x<<endl;
}