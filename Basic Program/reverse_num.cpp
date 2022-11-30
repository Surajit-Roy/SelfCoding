#include<iostream>
using namespace std;

int main(){
    int n, rem;
    int reverse = 0;
    cout << "Enter a Number-> ";
    cin >> n;
    while(n != 0){
        rem = n%10;
        reverse = reverse*10+rem;
        n = n/10;
    }
    cout << "The Reverse Number is-> "<<reverse << endl;

    return 0;
}

// output:

// Enter a Number-> 321
// The Reverse Number is-> 123