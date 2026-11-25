#include <iostream>
using namespace std;

int main() {
    int n,target{};
    cin>>n>>target;
    int array[n];
    for(int i{};i<n;i++){
        cin>>array[i];
    }
    int count{};
    for(int i{};i<n;i++){
        if(array[i]>=array[target-1] && array[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}