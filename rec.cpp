#include<bits/stdc++.h>

using namespace std;

long long solve(long long n){
    if(n==0) return 1;
    return n*solve(n-1);
}

int main(){
    long long n;
    cin>>n;
    long long ans=solve(n);

    cout<<ans<<endl;
}