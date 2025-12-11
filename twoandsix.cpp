//The program wants to get 1 by either multiplyinh by 2 or divide by 6
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count2=0;
        long long count3=0;
        long long totalSteps=0;

        if(n==1) {
            cout<<0<<endl;
            continue;
        }

        while(n%3==0 && n>0){
            count3++;
            n=n/3;
        }

        while(n%2==0 && n>0){
            count2++;
            n=n/2;
        }

        if(n>1 || count2>count3){
            cout<<-1<<endl;
        }else{
            totalSteps+=count3+count3-count2;
            cout<<totalSteps<<endl;
        }

    }

    return 0;
}