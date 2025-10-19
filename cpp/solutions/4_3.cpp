//Find the sum and average of elements in an array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numberOfElements;
    cout << "Enter number of elements of the array: ";
    cin >> numberOfElements;

    int arr[numberOfElements];
    // first time trying out using while loop!
    int i = 0;
    while (i < numberOfElements) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
        i++;
    }

    cout << "Your Array: { ";
    int j = 0;
    while (j < numberOfElements) {
        cout << arr[j] << " ";
        j++;
    }
    cout << "}" << endl;

    // calculate sum and aveate of elements in the array!
    int sum = 0;
    
    // sum
    for (int x = 0; x < numberOfElements; x++) {
        sum += arr[x];
    }
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum/numberOfElements << endl;
    return 0;
}