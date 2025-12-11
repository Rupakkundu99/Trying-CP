// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int t;
//     cin>>t;
//     while(t--){
//         int x,k;
//         cin>>k>>x;
//         long long ans;
//         ans=x;
//         while(k--){
//             ans=ans*2;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        
        long long maxSum = -1;
        
        // Collect all relevant divisors to check
        vector<long long> divisors;
        
        // Always check k=1 and k=b
        divisors.push_back(1);
        if(b > 1) divisors.push_back(b);
        
        // Check small divisors up to sqrt(b) or a reasonable limit
        for(long long k = 2; k * k <= b && k <= 1000000; k++){
            if(b % k == 0){
                divisors.push_back(k);
                if(k != b/k){
                    divisors.push_back(b/k);
                }
            }
        }
        
        // Check each divisor
        for(long long k : divisors){
            long long newSum = a * k + b / k;
            if(newSum % 2 == 0){
                maxSum = max(maxSum, newSum);
            }
        }
        
        cout << maxSum << endl;
    }
    return 0;
}