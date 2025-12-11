#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>nums(n);
        int zero=0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==0){
                zero++;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        nums[0]=100000;
        sort(nums.begin(),nums.end());
        ll ans=nums[n-1]*nums[n-2]*nums[n-3];
        if(zero>1){
            cout<<0<<endl;
        }else{
        cout<<ans<<endl;
        }
    }

    return 0;
}