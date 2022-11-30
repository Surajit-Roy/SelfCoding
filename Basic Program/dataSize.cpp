#include<iostream>
using namespace std;
int main(){
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    return 0;
}

// output: 

// Size of char : 1
// Size of int : 4
// Size of short int : 2
// Size of long int : 4
// Size of float : 4
// Size of double : 8
// Size of wchar_t : 2