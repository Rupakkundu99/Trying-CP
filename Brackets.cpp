#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(s[i]='(' && s[j]==')'){
                i++;
                j--;
            }else{
                cout<<"YES"<<endl;
                break;
            }
        }
        if(i>=j){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}