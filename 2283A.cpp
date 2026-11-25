#include <cmath>
#include <iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    int testcase[t][2];
    int a,b;
    int result{};
    int flag = 1;
    for(int i{};i<t;i++){
        cin>>a>>b;
        testcase[i][0] = a;
        testcase[i][1] = b; 
    }
    for(int i{};i<t;i++){
        flag = 1;
        result =0;
        int right = testcase[i][1];
        int left = testcase[i][0];
        while(flag){
            int sum = ((right+left)*(abs(left-right)+1))/2;
            if(left<=sum && sum<=right){
                cout<<result<<endl;
                flag =0;
            }
            else{
                if(abs(left)>abs(right)){
                    left -= (left > 0) - (left < 0);
                }
                else{
                    right -= (right > 0) - (right < 0);
                }
                result++;
            }
        }
        
    }



    return 0;
}