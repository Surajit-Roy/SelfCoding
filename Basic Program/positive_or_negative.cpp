#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a Number-> ";
    cin >> num;
    if(num > 0)
        cout << num << " is a Positive Number." << endl;
    else
        cout << num << " is a Negative Number." << endl;
    return 0;
}

// output:

// Enter a Number-> 10
// 10 is a Positive Number.

// Enter a Number-> -10
// -10 is a Negative Number.