#include<iostream>
using namespace std;
int main(){
    int n, m, sum = 0;
    cout << "Enter a number-> ";
    cin >> n;
    while(n>0){
        m = n%10;
        sum = sum+m;
        n = n/10;
    }
    cout << "The Sum is-> " << sum << endl;

    return 0;
}

// output:

// Enter a number-> 12
// The Sum is-> 3

// Enter a number-> 343
// The Sum is-> 10