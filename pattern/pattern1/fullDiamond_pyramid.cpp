#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int count=4;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=count; j++){
    //         cout<<"  ";
    //     }
    //     count--;
    //     for(int j=1; j<= 2*i-1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // count =1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=count; j++){
    //         cout<<"  ";
    //     }
    //     count++;
    //     for(int j=1; j<=2*(n-i)+1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "* ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=2*(n-i)-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}