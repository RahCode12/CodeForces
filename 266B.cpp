    //Queue at the School
    #include <iostream>
    using namespace std;
    #include <cstdlib>

    int main() {
        int size,t{};
        cin>>size>>t;

        string input;
        cin>>input;

        while (t--)
        {
            for(int i{};i<size-1;i++){
                if(input[i] =='B' && input[i+1] =='G'){
                    char temp = input[i];
                    input[i] = input[i+1];
                    input[i+1] = temp;
                    i++;
                }
            }
        }
        cout<<input;
        
        return 0;
    }