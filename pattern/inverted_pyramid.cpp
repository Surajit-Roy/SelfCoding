#include<iostream>
using namespace std;

int main(){
    int n=5;
    int count=1;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=count;j++){
            cout<<"  ";
        }
        count ++;
        for(int j=1; j<=2*(n-i)-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}