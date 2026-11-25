#include <iostream>
#include <string.h>
using namespace std;
string s = "";
bool check(char chr){
    int flag = 1;
    int count = 0;
    for(int i{};i< s.length();i++){
        if(chr == s[i] && chr != '*'){
            if(count==0){
                flag = 0;
            }
            else{
                s[i] = '*';
            }
            count += 1;
        }
    }
    if(flag)
        return  false;
    return true;
}



int main() {
    cin>>s;
    int count = 0;
    for(char i : s){
        if(check(i)){
            count += 1;
        }
    }
    if(count%2){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }

    return 0;
}