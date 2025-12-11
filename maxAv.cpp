#include<bits./stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long maxAvg=0;
        for(int i=0;i<n;i++){
            maxAvg=max(maxAvg,a[i]);
        }
        cout<<maxAvg<<endl;
    }

    return 0;
}