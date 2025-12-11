//https://codeforces.com/contest/1691/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>shoeSize(n);
        for(long long i=0;i<n;i++){
            cin>>shoeSize[i];
        }

        map<long long,long long>freq;
        for(long long i=0;i<n;i++){
            freq[shoeSize[i]]++;
        }

        long long flag=0;

        for(auto i:freq){
            if(i.second==1){
                flag=1;
                break;
            }
        }

        if(flag){
            cout<<-1<<endl;
            continue;
        }//If all unqiue elements exists no chance of exchange

        vector<long long>students(n);
        for(long long i=0;i<n;i++){
            students[i]=i+1;
        }

        long long l=0;
        long long r=0;

        while(r<n){
            if(shoeSize[l]==shoeSize[r]){
                r++;
            }else{
                rotate(students.begin()+l,students.begin()+l+1,students.begin()+r);//It rotates the array from shoesizeBegin +l which is 0 till the value of r shift to right by 1
                l=r;//Making l and r equal after the rotation as we start from new index again
            }
        }
        rotate(students.begin()+l,students.begin()+l+1,students.begin()+r);//Happens when all the sizes are equal and r reaches the last index

        for(auto i:students){
            cout<<i<<" ";
        }
        cout<<endl;


    }
    
    return 0;
}