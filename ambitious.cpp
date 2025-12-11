#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    vector<int>b;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            b.push_back(a[i]);
        }else{
            b.push_back(-a[i]);
        }
    }
    
    sort(b.begin(),b.end());
    
    cout<<b[0]<<endl;
    return 0;
}