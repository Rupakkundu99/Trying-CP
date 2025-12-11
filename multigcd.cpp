#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int gcd=gcdOfArray(a);
        vector<int>diff(n);
        while(gcd<1){
            for(int i=0;i<n;i++){
                diff[i]=k-(a[i]%k);
            }

        }

    }

    return 0;
}

int gcdOfArray(vector<int>& arr) {
    int result = arr;
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
        // Early termination if GCD becomes 1
        if (result == 1) return 1;
    }
    return result;
}   