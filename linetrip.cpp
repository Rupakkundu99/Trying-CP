#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n,x;
        vector<long long> points;
        points.push_back(0);
        for(int i=0;i<n;i++){
            long long point;
            cin>>point;
            points.push_back(0);
        }
        points.push_back(x);
        n=points.size();

        long long max_distance=0;
        
        for(int i=1;i<n;i++){
            if(i==n-1){
                max_distance=max(max_distance,2*(points[i]-points[i-1]));
            }
            else{
                max_distance=max(max_distance,points[i]-points[i-1]);
            }
        }
        cout<<max_distance<<endl;
    }

    return 0;
}