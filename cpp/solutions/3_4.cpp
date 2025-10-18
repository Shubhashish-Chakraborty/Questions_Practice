// Print the factorial of a number.
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long number;
    long long fact=1;
    cout << "Enter Number whose factorial you wanna find out: ";
    cin >> number;
    int x = 1;
    while (x <= number) {
        fact *= x;
        x++;
    }
    cout << "Factorial of " << number << " is: " << fact;
    return 0;
}