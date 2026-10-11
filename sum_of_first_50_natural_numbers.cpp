// Program Title: Sum of First 50 Natural Numbers
// Name: Haseeb Ahmad 
// Registration No: l1s26bscs0025
// Assignment: 01
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int formulasum=0;

    for (int i = 1; i <= 50; i++) {
        sum =sum+ i;
    }

    cout << "Sum of first 50 natural numbers (loop): "
        << sum << endl;
    formulaSum = 50 * (50 + 1) / 2;

cout << "Sum using formula n(n+1)/2: "
     << formulasum << endl;

    return 0;
}
