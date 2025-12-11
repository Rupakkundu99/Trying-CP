#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>index;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                index.push_back(i+1);
            }
        }
        cout<<index.size()<<endl;
        
        for(int i=0;i<index.size();i++){
            cout<<index[i]<<(i==index.size()-1?" ":" ");
        }
        cout<<endl;
    }
    
    return 0;
}