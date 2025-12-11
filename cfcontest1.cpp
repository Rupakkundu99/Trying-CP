// // #include<iostream>
// // #include<string>
// // #include<vector>

// // using namespace std;

// // int main(){
// //     int t;
// //     cin >> t;
// //     while(t--){
// //         int n;
// //         cin >> n;
// //         string s;
// //         cin >> s;
// //         int b;
// //         cin >> b;
// //         string sb;
// //         cin >> sb;
// //         string dv; // This variable corresponds to your 'vd'
// //         cin >> dv;

// //         // This loop iterates from 0 to b-1 to process both strings sb and dv
// //         for(int j = 0; j < b; j++){
// //             // Check the character in the 'dv' string at the current position
// //             if(dv[j] == 'V'){
// //                 // If it's 'V', insert the character from 'sb' at the beginning of 's'
// //                 s.insert(0, 1, sb[j]);
// //             } else { // Assuming the only other character is 'D'
// //                 // If it's 'D', append the character from 'sb' to the end of 's'
// //                 s.push_back(sb[j]);
// //             }
// //         }
// //         cout << s << endl;
// //     }
// //     return 0;
// // }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
    
//     while (t--) {
//         long long n;
//         cin >> n;
        
//         vector<long long> results;
        
//         // Try different numbers of zeros appended (k)
//         // If x has digits, then y = x * 10^k for some k >= 1
//         // So n = x + x * 10^k = x * (1 + 10^k)
//         // Therefore x = n / (1 + 10^k)
        
//         long long power_of_10 = 10;
//         while (power_of_10 <= 1e18 && power_of_10 > 0) { // Avoid overflow
//             long long divisor = 1 + power_of_10;
            
//             if (divisor > n) break; // No point checking further
            
//             if (n % divisor == 0) {
//                 long long x = n / divisor;
//                 if (x > 0) {
//                     // Verify: if we append k zeros to x, do we get the right n?
//                     long long y = x * power_of_10;
//                     if (x + y == n) {
//                         results.push_back(x);
//                     }
//                 }
//             }
            
//             // Check for overflow before multiplying
//             if (power_of_10 > 1e17) break;
//             power_of_10 *= 10;
//         }
        
//         sort(results.begin(), results.end());
        
//         if (results.empty()) {
//             cout << 0 << "\n";
//         } else {
//             cout << results.size() << "\n";
//             for (int i = 0; i < results.size(); i++) {
//                 if (i > 0) cout << " ";
//                 cout << results[i];
//             }
//             cout << "\n";
//         }
//     }
    
//     return 0;
// }