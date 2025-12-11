//find the tallest Tower and length of the tallest tower and print them
//Problem 37A

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    map<int,int>counts;//Uses hashmap to store the tower length and its height
    for(int i=0;i<n;i++){
        int length;
        cin>>length;
        counts[length]++;
    }
    
    int tallestTower=0;
    
    for(const auto& pair:counts){
        tallestTower=max(tallestTower,pair.second);//Stores the max heighted value of tower by transversing through it
    }
    
    int totalTowers=counts.size();
    
    cout<<tallestTower<<" "<<totalTowers<<endl;
    
    
    return 0;
}