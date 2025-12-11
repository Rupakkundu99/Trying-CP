#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for(char c : s) {
            if(c == '0') cnt0++;
            else cnt1++;
        }
        int deficit=cnt0-cnt1;
        if(deficit%2==0){
            deficit=deficit/2;
        }
        if(cnt0==n){
            cout<<1<<endl;
        }
        else if(cnt1 >= cnt0) {
            cout << 0 << endl;
        } else {
            cout << deficit<< endl;
        }
    }
    return 0;
}

// // #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a , b;
//     cin >> a >> b;
//     vector<int>nums(abs(a),0);
//     long long sum=a*a;
//     if(a%2!=0){
//         nums[0]=b;
//     }
//     else {
//         nums[0]=(b+1)/2;
//         nums[1]=b/2;
//     }
//     sum-=b;
//     int i=abs(a%2+(a+1)%2*2);
//     int right=(abs(a)-i)/2;
//     int left=(abs(a)-i)/2;
//     double temp=INT_MAX;
//     while(right--){
//         temp--;
//         nums[i++]=temp;
//         sum-=temp;
//     }
//     temp=a%2?b:(b+1)/2;
//     while(left>1){
//         temp--;
//         nums[i++]=temp;
//         sum-=temp;
//         left--;
//     }
//     nums[i]=sum;
//     sort(nums.begin(),nums.end());
//     cout<<abs(a)<<endl;
//     for(int i=0;i<abs(a);i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }