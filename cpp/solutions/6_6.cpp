// function to reverse a string
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
    return 0;
}