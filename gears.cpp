#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        unordered_map<int, int> gear_count;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            gear_count[a[i]]++;
        }
        
        bool has_duplicate = false;
        for (auto& p : gear_count) {
            if (p.second >= 2) {
                has_duplicate = true;
                break;
            }
        }
        
        cout << (has_duplicate ? "YES" : "NO") << "\n";
    }
    
    return 0;
}