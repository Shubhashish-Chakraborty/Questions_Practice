//Find the maximum and minimum element in an array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // make an array from user's input
    int numberOfElements;
    cout << "Enter Number of Elements of the Array: ";
    cin >> numberOfElements;

    int arr[numberOfElements];

    for (int i = 0; i < numberOfElements; i++) {
        cout << "Enter Element" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Your Array: { ";
    for (int j = 0; j < numberOfElements; j++) {
        cout << arr[j] << " ";
    }
    cout << "}" << endl;

    // finding the maximum and minimum number in the array!
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < numberOfElements; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum Element = " << max << endl;
    cout << "Minimum Element = " << min << endl;


    return 0;
}