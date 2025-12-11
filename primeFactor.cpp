#include<vector>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

int solve(){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                a.push_back(i);
                if(i!=n/i){
                    a.push_back(n/i);
                }
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
}

int solve2(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n=n/i;
                a.push_back(i);
            }
        }
    }
    if(n>1){
        a.push_back(n);
    }
}