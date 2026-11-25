#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s1[101],s2[101] = "";
    cin>>s1;
    cin>>s2;
    int out = strcasecmp(s1,s2);

    if(out==0){
        cout<<0;
    }
    else if(out>0){
        cout<<1;
    }
    else{
        cout<<-1;
    }
    return 0;
}
//sSvpcITJAwghVfJaLKBmyjOkhltTGjYJVLWCYMFUomiJaKQYhXTajvZVHIMHbyckYROGQZzjWyWCcnmDmrkvTKfHSSzCIhsXgEZa
//vhCXkCwAmErGVBPBAnkSYEYvseFKbWSktoqaHYXUmYkHfOkRwuEyBRoGoBrOXBKVxXycjZGStuvDarnXMbZLWrbjrisDoJBdSvWJ