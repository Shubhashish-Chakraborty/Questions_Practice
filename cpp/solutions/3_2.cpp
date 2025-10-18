// Print the multiplication table of any number.
#include <bits/stdc++.h>
using namespace std;

int main () {
    float number;
    cout << "Enter number whose multiplication table you wanna print: ";
    cin >> number;

    // // for loop:
    // for (int i = 1; i <= 10; i++) {
    //     cout << number << " X " << i << " = " << number*i << endl;
    // }

    // while Loop:
    int j = 1;
    while (j <= 10) {
        cout << number << " X " << j << " = " << number*j << endl;
        j++;
    }
        
    return 0;
}