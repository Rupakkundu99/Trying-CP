//https://codeforces.com/problemset/problem/1807/D
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    vector<long long> prefix_sum(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        prefix_sum[i + 1] = prefix_sum[i] + a[i];

    }
    long long initial_sum = prefix_sum[n];


    while (q--) {
        int l, r;
        long long k;
        cin >> l >> r >> k;


        long long sum_to_remove = prefix_sum[r] - prefix_sum[l - 1];//We remove the prefix sum from index l-1 to r to replace it by a new number and its respective sum

        long long len = r - l + 1;//length of the stretch where the number replacement takes place

        long long sum_to_add = len * k;//total sum to be added newly appended array

        long long final_sum = initial_sum - sum_to_remove + sum_to_add;//removing the sum from the initial sum calculated earlier and replacing by new sum

        if (final_sum % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}