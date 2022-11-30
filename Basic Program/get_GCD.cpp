#include<iostream>
using namespace std;

int main(){
    int n1, n2, gcd;
    cout << "Enter Two inteers-> ";
    cin >> n1 >> n2;
    for(int i=1; i<=n1 && i<=n2; ++i){
        if(n1%i == 0 && n2%i == 0)
            gcd = i;
    }
    cout << "G.C.D of "<< n1 << " and " << n2 << " is-> " << gcd;
    return 0;
}
// output: 

// Enter Two inteers-> 105 30
// G.C.D of 105 and 30 is-> 15

// Enter Two inteers-> 100 20
// G.C.D of 100 and 20 is-> 20