#include<iostream>
using namespace std;

int main(){
    long long int fact = 1, num;
    cout << "Enter a number-> ";
    cin >> num;
    for(long long int i=1; i<=num; i++){
        
        fact = fact * i;
        cout << "factorial of " << i << " is " << fact << endl;
    }
    // cout << "factorial of " << num << " is " << fact;

    return 0;
}

// output:
// Enter a number-> 5
// factorial of 1 is 1
// factorial of 2 is 2
// factorial of 3 is 6
// factorial of 4 is 24
// factorial of 5 is 120