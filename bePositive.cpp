#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int count0=0;
        int minus1=0;

        for(int i=0;i<n;i++){
            if(a[i]==0){
                count0++;
            }
            if(a[i]==-1){
                minus1++;
            }
        }

        int total=0;
        if(minus1%2==0){
            total+=0;
        }
        if(minus1%2!=0){
            total+=2;
        }

        total+=count0;

        cout<<total<<endl;
    }

    return 0;
}