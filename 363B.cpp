#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size,width{};
     cin>>size>>width;
    int arrangement[size]{};
    int prefix_sum[size+1]{};

    for(int i{};i<size;i++){
        cin>>arrangement[i];
    }

    //Prefix Sum creatation
    for(int i{};i<size;i++){
        prefix_sum[i+1] = prefix_sum[i]+arrangement[i];
    }

    //Finding the least
    long int smallest[2] = {INT_MAX,-1};
    for(int i{};i<size-width+1;i++){
        if(width == size){
            cout<<size;
            return 0;
        }
        int hash = prefix_sum[i+width]-prefix_sum[i];
        if(smallest[0]>hash){
            smallest[0] = hash;
            smallest[1] = i+2;
        }
    }

    cout<<smallest[1];
    return 0;}