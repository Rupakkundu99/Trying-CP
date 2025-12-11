// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         vector<int>a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//         int small=0;
//         set<int> element;

//         for(int i=0;i<n;i++){
//             if(a[i]<=k){
//                 small++;
//                 element.insert(a[i]);
//             }
//         }

//         int duplicate=small-element.size();
//         int total=0;
//         int notFound=k+1-element.size();

//         total=duplicate+notFound;

//         cout<<total<<endl;
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n, k;
    std::cin >> n >> k;
    
    std::vector<bool> present(k, false);
    int k_count = 0;

    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        if (val < k) {
            present[val] = true;
        } else if (val == k) {
            k_count++;
        }
    }

    int missing_count = 0;
    for (int i = 0; i < k; ++i) {
        if (!present[i]) {
            missing_count++;
        }
    }

    std::cout << std::max(missing_count, k_count) << std::endl;
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