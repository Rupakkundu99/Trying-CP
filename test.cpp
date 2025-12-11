#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int primeList[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
        
        bool isGcd=true;
        int gcd=0;
        for(int primeNumber:primeList){
            for(int i=0;i<n;i++){
                if(a[i]%primeNumber!=0){
                    isGcd=false;
                    gcd=primeNumber;
                    break;
                }
            }
            if(!isGcd){
                break;
            }
        }
        if(!isGcd){
            cout<<gcd<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}