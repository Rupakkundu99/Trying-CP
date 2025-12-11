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