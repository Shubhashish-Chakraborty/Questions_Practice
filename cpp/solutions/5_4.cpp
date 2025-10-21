//Check whether a string is a palindrome.

#include <bits/stdc++.h>
using namespace std;

string string_reverse(string originalString) {
    string reversedString = "";
    for (int i = originalString.length() - 1; i >= 0; i--) {
        reversedString += originalString[i];
    }
    return reversedString;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin,str);

    string rev = string_reverse(str);
    
    if (rev == str) {
        cout << "Your String is a PALLINDROME!!";
    } else {
        cout << "Your String is NOT a PALLINDROME!!";
    }
    
    return 0;
}