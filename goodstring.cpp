#include<string>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count1=0;
        int count0=0;
        int ts=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') count1++;
            else count0++;
        }
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='0' && count1>0){
                count1--;
                ts++;
            }else if(s[i]=='1' && count0>0){
                count0--;
                ts++;
            }
            else{
                break;
            }
        }
        
        cout<<s.length()-ts<<endl;
    }
}