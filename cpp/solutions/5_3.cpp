// Reverse a string without using built-in functions.
#include <bits/stdc++.h>
using namespace std;

void reverseString(string originalString) {
    string reversedString = "";

    for (int i = originalString.length() - 1; i >= 0; i--) {
        reversedString += originalString[i];
    }

    cout << "Original String: " << originalString << endl;
    cout << "Reversed String: " << reversedString << endl;
}

int main() {
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    reverseString(str);
    return 0;
}