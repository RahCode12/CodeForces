#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    //Get the number of dominos
    int domino{};
    if(m%2 == 0){
        domino = (m/2)*n;
        cout<<domino;
        return 0;
    }
    domino = ((m/2)*n+ (n/2));
    cout<<domino;
    return 0;
}