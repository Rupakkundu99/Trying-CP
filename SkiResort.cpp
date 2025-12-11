// https://codeforces.com/contest/1840/problem/C
//We calculate number of consecutive days and find the sum till n and add it to total number of ways it can be represnted
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
            a[i]=(a[i]>q) ?0:1;
        }
        
        long long count1=0;
        long long totalWays=0;
        
        for(long long i=0;i<n;i++){
            if(a[i]==1){
                count1++;
            }else{
                if(count1>=k){
                long long diff=count1-k+1;//Number of ways k elements can be arranged together in continious manner
                totalWays+=diff*(diff+1)/2;//Sum of n differences
                }
                count1=0;
            }
        }
        
        if(count1>=k){
        long long diff=count1-k+1;
        totalWays+=diff*(diff+1)/2;
        }
        
        cout<<totalWays<<endl;
    }
    
    return 0;
}