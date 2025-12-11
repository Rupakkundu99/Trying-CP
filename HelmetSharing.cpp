#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,p;
        vector<long long>a(n),b(n);
        vector<pair<long long,long long>>v(n);

        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        for(long long i=0;i<n;i++){
            cin>>b[i];
        }

        for(long long i=0;i<n;i++){
            v[i]={b[i],a[i]};
        }//input in order of cost per sharing,no of shares possible

        sort(v.begin(),v.end());//Sotted the array on basis of sharing cost

        long long minCost=p;
        long long alreadyShared=1;//Assuming pak has already shared it with others 

        for(auto it:v){
            long long canBeShared=it.second;
            long long sharingCost=it.first;

            if(sharingCost>=p){//If the cost of sharing per individual is greater than that of pak break off
                break;
            }

            if(alreadyShared+canBeShared>n){//if the no of people it has been shared+no of people it can be shared to exceeds that is more than required
                minCost+=(n-alreadyShared)*sharingCost;//The no fo people it has to shared and its total cost
                alreadyShared=n;//Now already shared is all people since no of people it can share to was larger than the no of people
                break;
            }else{
                minCost+=canBeShared*sharingCost;//Total cost of sharing
                alreadyShared+=canBeShared;//adding the alreadyshared till its not greater than or equal to n
            }
        }

        minCost+=(n-alreadyShared)*p;//if still not over use pak to add
        cout<<minCost<<endl;

    }

    return 0;
}