#include<iostream>
using namespace std;

int main(){
    int n, m= 0, flag = 0;
    cout << "Enter the Number to check Prime or Not-> ";
    cin >> n;
    m = n/2;
    for(int i=2; i<=m; i++){
        if(n%i == 0){
            cout << "Number is Not Prime." << endl;
            return 0;
        }
    }
    if(flag == 0){
        cout << "Number is Prime." << endl;
    }
    return 0;
}