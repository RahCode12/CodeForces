// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,r,l{};
//     cin>>n;
//     vector <long int> v;
//     int size = n;
//     vector <long long int> C_v(n+1,0);
//     vector <long long int> CS_v(n+1,0);

    
//    for (auto &x : v) cin >> x;

//     for(int i{};i<size;i++){
//         C_v[i+1] = C_v[i]+v[i];
//     }
//     sort(v.begin(),v.end());
//     for(int i{};i<size;i++){
//         CS_v[i+1] = CS_v[i]+v[i];
//     }

//     int m{};
//     cin>>m;
//     int Input[m][3];
//     for(int i{};i<m;i++){
//         int type{};
//         cin>>type>>r>>l;
//         Input[i][0] = type;
//         Input[i][1] = r;
//         Input[i][2] = l;}

//     for(int i{};i<m;i++){
//         long output{};
//         if(Input[i][0] == 1){
//             output = C_v[Input[i][2]]-C_v[Input[i][1]-1];
//         }   
//         else{
//             output = CS_v[Input[i][2]]-CS_v[Input[i][1]-1];
//         }
//         cout<<output<<endl;
// }}

