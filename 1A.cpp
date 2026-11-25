#include <iostream>
using namespace std;

int main() {
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int count = 0;
    count = (m/a)*( n/a);

    if((m%a)){
        count += n%a?(n/a)+1:(n/a);
    }
    if((n%a)){

        count += m%a?(m/a)+1:(m/a);
    }
    if((n%a && m%a)){
        count -=1;
    }

    cout<<count;
    return 0;
}