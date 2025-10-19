// Count even and odd numbers in an array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numberOfElements;
    cout << "Enter the Number of elements of that array: ";
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

    // main counting logic:
    int evenCount = 0;
    int oddCount = 0;

    for (int x = 0; x < numberOfElements ; x++) {
        if (arr[x] % 2 == 0) {
            evenCount += 1;
        } else {
            oddCount += 1;
        }
    }

    cout << endl;
    cout << "Even Numbers in the array:" << evenCount << endl;
    cout << "Odd Numbers in the array:" << oddCount << endl;
    return 0;
}