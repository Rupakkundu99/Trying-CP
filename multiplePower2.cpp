#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll maxi=32;
        while(q--){
            ll x;
            cin>>x;
            if(x>=maxi){
                continue;
            }
            maxi=x;
            for(int i=0;i<n;i++){
                if((a[i])&((1<<x)-1)==0){
                    a[i]+=(1<<x)-1;
                }
            }
        }

        for(auto it:a){
            cout<<it<<endl;
        }
    }
}