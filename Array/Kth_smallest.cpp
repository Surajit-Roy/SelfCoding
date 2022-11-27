#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int k;
        cin>>k;
        sort(a, a+n);
        cout<< a[k-1] <<endl;
    }
    return 0;
}