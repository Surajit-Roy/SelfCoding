#include<iostream>
using namespace std;
int main(){
    long long n;
    int count = 0;
    cout << "Enter an integer-> ";
    cin >> n;
    while(n != 0){
        n /= 10;
        ++count;
    }
    cout << "Number of digits-> " << count;
    return 0;
}
// output:

// Enter an integer-> 1234
// Number of digits-> 4