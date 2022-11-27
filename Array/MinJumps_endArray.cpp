#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int dp[n];
        for(int i=0; i<n; i++)
            dp[i] = INT_MAX;
        dp[0] = 0;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(dp[j]!=INT_MAX and (a[j]+j >= i)){
                    if(dp[j]+1 < dp[i]){
                        dp[i] = dp[j]+1;
                    }
                }
            }   
        }
        if(dp[n-1] != INT_MAX)
            cout << dp[n-1] << endl;
        else
            cout << "-1 \n";
    }
    return 0;
}