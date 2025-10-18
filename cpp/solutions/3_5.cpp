// Print all even and odd numbers between 1 and N separately.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long evenSum = 0, oddSum = 0;

    cout << "Enter Number: ";
    cin >> N;

    cout << "Even Numbers Between 1 and " << N << ": ";
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    cout << "Odd Numbers Between 1 and " << N << ": ";
    for (int j = 1; j <= N; j++) {
        if (j % 2 != 0) {
            cout << j << " ";
        }
    }

    for (int x = 1; x <= N; x++) {
        if (x % 2 == 0) { // even
            evenSum += x;
        } else { // odd
            oddSum += x;
        }
    }

    cout << endl;
    cout << "Even Numbers Sum: " << evenSum << endl;
    cout << "Odd Numbers Sum: " << oddSum << endl;

    return 0;
}