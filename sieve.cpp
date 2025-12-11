#include<bits/stdc++.h>
using namespace std;

const int N=1e7;
bool prime[N];

int solve(){
    for(int i=0;i<N;i++){
        prime[i]=1;
    }

    prime[0]=prime[1]=0;
    for(int i=2;i*i<N;i++){
        if(prime[i]==1){
            for(int j=i*i;j<N;j+=i){//since every i is prime its 2*i should not be prime since i would already be its factor
                prime[j]=0;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}