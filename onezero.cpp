#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    int ans=0;
    map<int,int>mp;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]==0) sum-=1;
        else sum+=1;

        if(sum==0) ans=max(ans,i+1);
        else{
            if(mp.find(sum)!=mp.end()){
                ans=max(sum,i-mp[sum]);
            }else{
                mp[sum]=i;
            }
        }
    }
    return 0;
}