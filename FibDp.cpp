#include<bits/stdc++.h>
using namespace std;

long long functionEntered=0;
vector<long long>dp(10000000,-1);

long long fibo(long long n){
    functionEntered++;
    if(n==1 || n==2) return 1;

    if(dp[n]!=-1) return dp[n];

    return dp[n]=fibo(n-1)+fibo(n-2);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        long long b=fibo(a);
        cout<<b<<endl;
    }
}