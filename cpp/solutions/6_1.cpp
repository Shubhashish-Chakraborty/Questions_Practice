//Write a function to calculate factorial of a number.

#include <bits/stdc++.h>
using namespace std;

int factorial(int number) {
    long long fact = 1;
    for (int i = 1; i <= number; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;
    char choice;
    long long answer;

    while (true) {
        cout << "Enter the Number whose factorial you wanna calculate: ";
        cin >> number;

        answer = factorial(number);
        cout << "The Factorial of " << number << " is " << answer;

        cout << endl;
        cout << "Want to run again?? (y/n)";
        cin >> choice;
        if (choice == 'n') {
            cout << "Bye!";
            break;
        }
        cout << endl;
    }
    return 0;
}