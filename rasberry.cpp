#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n);

        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        long long ans=INT_MAX;
        long long evenCount=0;
        for(long long i=0;i<n;i++){
            if(a[i]%2==0){
                evenCount++;
            }
            if(a[i]%k==0)
            ans=0;//Since no steps needed to transform the array elements as it is a multiple of k
            ans=min(ans,(k-a[i]%k));
            //Ex for 12 div by 5 :5-(12)%5=5-2=3 if added to 12 makes it divisble by 5
        }
        if(k==4){
            //For k=4 if evencount>=2 means it is already divisble by 4
            if(evenCount>=2){
                ans=min(ans,0LL);
            }else if(evenCount==1){
                //If even count is 1 on adding 1 to any odd number product of 2 even is divisible by 4
                ans=min(ans,1LL);
            }else if(evenCount==0){
                //If no even number then add 1 to both odds and we get it
                ans=min(ans,2LL);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}