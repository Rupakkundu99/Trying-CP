#include <vector>
#include <map>
#include <iostream>

using namespace std;

long long number(vector<long long>&a, long long k){
    long long n = a.size();
    long long prefix_sum = 0, count = 0;
    map<long long, long long> mpp;  // Fixed: Added template arguments

    mpp[0] = 1;
    for(long long i = 0; i < n; i++){
        prefix_sum += a[i];

        long long remove = prefix_sum - k;
        count += mpp[remove];
        mpp[prefix_sum] += 1;
    }
    return count;
}

int main(){  // Fixed: Changed void to long long
    long long n,sum;
    cin>>n>>sum;
    vector<long long>a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans=number(a,sum);
    cout<<ans;
}