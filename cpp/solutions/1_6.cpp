// Write a program to swap two numbers using a third variable and without using a third variable.
#include <bits/stdc++.h>
using namespace std;

void using3rdVar() {
    float n1, n2, swapContainer, original_n1, original_n2;
    
    cout << "Enter n1, n2: ";
    cin >> n1 >> n2;

    original_n1 = n1;
    original_n2 = n2;

    swapContainer = n1;
    n1 = n2;
    n2 = swapContainer;

    cout << "Originally number1: " << original_n1 << " , Originally number2: " << original_n2 << endl;
    cout << "After Swap!!!" << endl;
    cout << "Number1: " << n1 << " , Number2: " << n2 << endl;
}
void notUsing3rdVar() {
    float n1, n2, original_n1, original_n2;
    
    cout << "Enter n1, n2: ";
    cin >> n1 >> n2;

    original_n1 = n1;
    original_n2 = n2;

    // main swap logic
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    cout << "Originally number1: " << original_n1 << " , Originally number2: " << original_n2 << endl;
    cout << "After Swap!!!" << endl;
    cout << "Number1: " << n1 << " , Number2: " << n2 << endl;
}

int main() {
    string choice;
    while (true) {
        cout << "1-> swap two numbers using a third variable, 2-> swap two numbers without using a third variable, 3-> EXIT: ";
        cin >> choice;
        if (choice == "3") {
            break;
        } else if (choice == "1") {
            using3rdVar();
        } else if (choice == "2") {
            notUsing3rdVar();
        }
    }
    return 0;
}