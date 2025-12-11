#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;

        vector<long long>secondElement;
        long long lowestFirstMin=INT_MAX;
        
        for(int i=0;i<n;i++){
            long long m;
            cin>>m;
            
            vector<long long>a(m);

            for(auto &x:a){
                cin>>x;
            }
            sort(a.begin(),a.end());

            secondElement.push_back(a[1]);
            lowestFirstMin=min(lowestFirstMin,a[0]);

        }
        sort(secondElement.begin(),secondElement.end());
        long long sumOfsecondElements=accumulate(secondElement.begin(),secondElement.end(),0LL);
        long long secondLowestMin=secondElement[0];
        long long ans=lowestFirstMin+sumOfsecondElements-secondLowestMin;
        cout<<ans<<endl;
    }

    return 0;
}