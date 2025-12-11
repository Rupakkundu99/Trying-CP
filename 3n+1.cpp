#include<bits/stdc++.h>

using namespace std;

int solve(int n){
    int count=0;
    if(n==1) return 1;
    if(n==2) return 2;
    while(n!=1){
        if(n%2==0){
            n=n/2;
            
        }
        else if(n%2==1){
            n=3*n+1;
            
        }
        count++;
    }
    return count+1;
}

int main(){
    
    int n;
    cin>>n;
    int ans=solve(n);
    cout<<ans<<endl;
    return 0;
}