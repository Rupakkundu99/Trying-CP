// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         long long x,y,k;
//         cin>>x>>y>>k;
//         long long count=0;
//         while(x != 0 || y != 0){
//             if(x>=k && y>=k){
//                 x-=k;
//                 y-=k;
//                 count+=2;
//             }
//             else if(x==0 && y>0){
//                 if(y<k){
//                     y-=(y%k);
//                 }else{
//                     y-=k;
//                 }
//                 count+=2;
//             }
//             else if(y==0 && x>0){
//                 if(x<k){
//                     x-=(x%k);
//                 }else{
//                     x-=k;
//                 }
//                 count+=2;
//             }
//             else if(x<k && y<k){
//                 x-=(x%k);
//                 y-=(y%k);
//                 count+=2;
//             }
//         }
//         cout<<count<<endl;
//     }

//     return 0;
// }
// Above logic did not work but i reached to 80% of it

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ceil_find(ll x,ll k){
    if(x==0) return 0;
    return (x+k-1)/k;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll a=ceil_find(x,k);
        ll b=ceil_find(y,k);
        ll total=0;
        if(a>b){
            total=2*a-1;
        }else{
            total=2*b;
        }
        cout<<total<<endl;
    }
    return 0;
}