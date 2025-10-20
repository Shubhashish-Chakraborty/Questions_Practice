//Count vowels, consonants, digits, and spaces in a string.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter Your String: ";
    getline(cin,str);

    cout << endl;
    cout << "Your String: " << str << endl;

    int vowelCount = 0 , consoCount = 0 , digitCount = 0, spaceCount = 0;

    for (auto ch: str) {
        if (isalpha(ch)) {
            char loweredChar = tolower(ch);

            if (loweredChar == 'a' || loweredChar == 'e' || loweredChar == 'i' || loweredChar == 'o' || loweredChar == 'u') {
                vowelCount++;
            } else {
                consoCount++;
            }
        } else if (isdigit(ch)) {
            digitCount++;
        } else if (isspace(ch)) {
            spaceCount++;
        }
    }

    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consoCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Spaces: " << spaceCount << endl;
    return 0;
}