#include <iostream>
using namespace std;

int main() {
    int temp = 0;
    int index[2] = {0,0};
    for(int i = 1;i<=5; i++){
        for(int j =1;j<=5;j++){
            cin>>temp;
            if(temp){
                index[0] = i;
                index[1] = j;
            }
        }
    }
    cout<<(abs(index[0]-3)+abs(index[1]-3));
    return 0;
}