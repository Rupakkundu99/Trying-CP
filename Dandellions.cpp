// // https://codeforces.com/contest/2148/problem/D
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         vector<long long>a(n);
        

//         long long oddNumber=0;

//         vector<long long>odd;

//         for(long long i=0;i<n;i++){
//             cin>>a[i];
//         }

        
//         for(long long i=0;i<n;i++){
//             if(a[i]%2!=0){
//                 oddNumber++;
//                 odd.push_back(a[i]);
//             }
//         }


//         sort(odd.begin(),odd.end());
        
//         long long totalDandellions=0;

//         if(oddNumber==1){
//             for(long long i=0;i<n;i++){
//                 totalDandellions+=a[i];
//             }
//         }else if(oddNumber>1){
//             if(a[i]%2!=0){
//                 totalDandellions+=a[i];
//             }else{
//                 while(i<=ceil(odd.size()/2)){
//                     totalDandellions+=odd[odd.size()-i-1];
//                 }
//             }
//         }

//         cout<<totalDandellions<<endl;

//     }

//     return 0;
// }

#include<bits/stdc++.h>
void solve() {
    long long n;
    std::cin >> n;

    long long sum_evens = 0;
    std::vector<long long> odds;
    for (int i = 0; i < n; ++i) {
        long long val;
        std::cin >> val;
        if (val % 2 == 0) {
            sum_evens += val;
        } else {
            odds.push_back(val);
        }
    }

    long long k = odds.size();
    if (k == 0) {
        std::cout << 0 << std::endl;
        return;
    }
    long long total_dandelions = sum_evens;
    std::sort(odds.begin(), odds.end());
    long long num_to_sacrifice = k / 2; 
    for (long long i = num_to_sacrifice; i < k; ++i) {
        total_dandelions += odds[i];
    }
    
    std::cout << total_dandelions << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}