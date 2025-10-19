//. Reverse an array.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int numberOfElements;
	cout << "Enter the Number of elements of the array: ";
	cin >> numberOfElements;

	int arr[numberOfElements];

	for (int i = 0; i < numberOfElements; i++) {
		cout << "Enter Element " << i + 1 << ": ";
		cin >> arr[i];
	}

	cout << "Your Array: { ";
	for (int j = 0; j < numberOfElements; j++) {
		cout << arr[j] << " ";
	}
	cout << "}" << endl;

	// main reversing logic:

	int reversedArr[numberOfElements];
	for (int x = 0; x < numberOfElements; x++) {
		reversedArr[x] = arr[numberOfElements - 1 - x];
	}

	cout << endl;
	cout << "Reversed Array: { ";
	for (int y = 0; y < numberOfElements; y++) {
		cout << reversedArr[y] << " ";
	}
	cout << "}" << endl;
	return 0;
}