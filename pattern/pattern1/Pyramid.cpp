#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int count =4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=count; j++){
            cout<<"  ";
        }
        count--;
        for(int j=1; j<=2*i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}