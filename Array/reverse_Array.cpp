#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int start = 0, end = n-1;
        while(start<end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        cout<<s<<endl;
    }
    return 0;
}