#include<iostream>
using namespace std;

int main(){
    int n1 = 0, n2 = 1, n3 = 0;
    int num;
    cout << "Enter the number of Fibonacci printed-> ";
    cin >> num;
    cout << n1 << " " << n2 << " ";
    for(int i=2; i<num; ++i){
        n3 = n1+n2;
        cout << n3 <<" ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}

// output:
// Enter the number of Fibonacci printed-> 10
// 0 1 1 2 3 5 8 13 21 34 