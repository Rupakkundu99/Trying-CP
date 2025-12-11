//Finding the smallest prime factors 
#include<bits/stdc++.h>
using namespace std;

const int N=1e7;
int spf[N];

int solve(){
    int n;
    cin>>n;
    vector<int>primeFactors;
    while(n>1){
        primeFactors.push_back(spf[n]);
        n=n/spf[n];
    }
    for(int i=0;i<primeFactors.size();i++){
        cout<<primeFactors[i]<<endl;
    }
}

int main(){

    for(int i=0;i<N;i++){
        spf[i]=i;
    }

    for(int i=2;i*i<N;i++){
        if(spf[i]==i){
            for(int j=i*i;j<N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}