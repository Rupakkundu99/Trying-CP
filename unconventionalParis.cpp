#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        long long maxdiff = 0;
        for (int i = 0; i < n; i += 2) {
        long long currentdiff = a[i + 1] - a[i];
        if (currentdiff > maxdiff) {
            maxdiff = currentdiff;
        }
    }

    cout<<maxdiff<<endl;
    }

    return 0;
}