#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int Q;
        cin >> Q;
        vector<int> queries(Q);
        for (int i = 0; i < Q; i++) {
            cin >> queries[i];
        }
        set<int> divisors;
        for (int x : arr) {
            for (int i = 1; i * i <= x; i++) {
                if (x % i == 0) {
                    divisors.insert(i);
                    divisors.insert(x / i);
                }
            }
        }
        unordered_map<int, bool> possible;
        for (int d : divisors) {
            int g = 0;
            for (int x : arr) {
                if (x % d == 0) {
                    g = __gcd(g, x);
                }
            }
            if (g == d) {
                possible[d] = true;
            }
        }
        for (int k : queries) {
            if (possible[k]) {
                cout << "Y"<<endl;
            } else {
                cout << "N"<<endl;
            }
        }
        cout << "\n";
    }
    
    return 0;
}