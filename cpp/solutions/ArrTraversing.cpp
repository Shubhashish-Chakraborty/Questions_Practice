// Traversing in an array

#include <bits/stdc++.h>
using namespace std;

int main() {
	int numberOfElements;
	cout << "Enter the number of elements of your array: ";
	cin >> numberOfElements;

	int myArr[numberOfElements];

	for (int i = 0; i < numberOfElements; i++) {
		cout << "Enter Element " << i + 1 << ": ";
		cin >> myArr[i];
	}

	cout << endl;
	// traversing witout any indexing shit and all!
  	cout << "Your Array: { ";
 	for (int x: myArr) {
 		cout << x << " ";
 	}
  	cout << "}" << endl;
	return 0;
}