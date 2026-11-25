    #include <iostream>
    using namespace std;

    int main() {
        long long int k,n,w{};
        cin>>k>>n>>w;
        int result = ((w+1)*(w))/2;
        long int out = result*k-n;
        out = out>0?out:0;
        cout<<out;
        return 0;
    }