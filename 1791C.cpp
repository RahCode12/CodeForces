#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t{};
    cin>>t;
    int k = t;
    vector <string> testcase;
    vector <int> length;
    while(t--){
        int string_length = 0;
        cin>>string_length;
        length.push_back(string_length);
        //Useless for now
        string temp = "";
        cin>>temp;
        testcase.push_back(temp);
    }
    int flag = 1;
    for(int i{};i<k;i++){
        int result = length[i];
        flag = 1;
        for(int j{};j<length[i]/2;j++){
            if(testcase[i][j]+testcase[i][length[i]-1-j]==97 && flag){
                result -= 2;   
            }
            else{
                flag = 0;
            }
            
        }
        cout<<result<<endl;

    }
    return 0;
}