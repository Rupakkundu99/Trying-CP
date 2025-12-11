//https://codeforces.com/contest/1285/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){

    long long x;
    long long a,b;
    cin>>x;
    for(long long i=1;i*i<=x;i++){
        if(x%i==0 && i*(x/i)/__gcd(i,x/i)==x){
            a=i;
            b=x/i;
        }
    }

    cout<<a<<" "<<b;

    return 0;
}