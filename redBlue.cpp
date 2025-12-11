#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;

        if(n%2!=b%2){
            cout<<"NO"<<endl;
            continue;
        }

        if(n%2==b%2){
            if((a<=b) || (a%2==b%2)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}