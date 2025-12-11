#include<bits/stdc++.h>

using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        
        long long largestLength=1;
        long long counter=1;

        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k)
                counter++;
            else
                counter=1;

            largestLength=max(largestLength,counter);
        }
        cout<<n-largestLength<<endl;
     }
}