#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n;
    cin>>n;
    set<long long>flea;
    long long b=0;
    for(long long i=1;i<=n;i++){
        long long a=i-1;
        b+=a;
        flea.insert(b%n);
    }

    if(flea.size()==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl>>
    

    return 0;
}