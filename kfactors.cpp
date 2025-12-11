//Finding if k number of factors exists for a number n using the prime factor finding method and if yes print any factor greater than 1 else -1
//https://codeforces.com/problemset/problem/797/A
#include<bits/stdc++.h>
using namespace std;

const long long N=1e7;
long long spf[N];

int solve(){
    long long n;
    int k;
    cin>>n>>k;
    vector<long long>primeFactor;
    while(n>1){
        primeFactor.push_back(spf[n]);
        n=n/spf[n];
    }

    if(primeFactor.size()>=k){
        for(int i=0;i<k-1;i++){
            cout<<primeFactor[i]<<" ";
        }
        long long sum=1;
        for(int i=k-1;i<primeFactor.size();i++){
            sum*=primeFactor[i];
        }
        cout<<sum<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main(){

    for(long long i=2;i<N;i++){
        spf[i]=i;
    }

    for(long long i=2;i*i<N;i++){
        if(spf[i]==i){
            for(long long j=i*i;j<N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }

    solve();
    return 0;
}