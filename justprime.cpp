#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=2; i<=n; i++){
        int num = i;
        int count = 0;
        for(int j=2; j*j<=num; j++){
            if(num % j == 0){
                count++;
                while(num % j == 0){
                    num = num / j;
                }
            }
        }
        if(num > 1){
            count++;
        }
        if(count == 2){
            ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}