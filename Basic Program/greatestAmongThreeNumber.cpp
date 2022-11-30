#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout << "Enter value of num1, num2, num3-> ";
    cin >> num1 >> num2 >> num3;
    if((num1>num2)&&(num1>num3))
        cout << endl <<"Number1 is greatest" << endl;
    else if((num2>num3)&&(num2>num1))
        cout << endl <<"Number2 is greatest" << endl;
    else
        cout << endl <<"Number3 is greatest" << endl;
    return 0;
}

// output: 

// Enter value of num1, num2, num3-> 10 2 4

// Number1 is greatest

// Enter value of num1, num2, num3-> 10 20 3        

// Number2 is greatest

// Enter value of num1, num2, num3-> 10 20 30       

// Number3 is greatest