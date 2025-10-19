//Input a string and print its length manually.

#include <bits/stdc++.h>
using namespace std;

int main() {
	string myStr;

	cout << "Enter the String: ";
	getline(cin, myStr);

	int strLen = 0;
	for (auto str: myStr) {
		strLen += 1;
	}

	cout << endl;
	cout << "String: " << myStr << endl;
	cout << "Length of String: " << strLen << endl;
	return 0;
}