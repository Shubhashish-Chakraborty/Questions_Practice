// Print the sum of the first N natural numbers.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int sum = 0;
    cout << "Enter the natural number upto where you want the sum:";
    cin >> N;

    // // for loop:
    // for (int x = 1; x <= N; x++) {
    //     sum += x;
    // }

    // while loop:
    int y = 1;
    while (y <= N) {
        sum += y;
        y++;
    }
    cout << "Sum of Natural Numbers upto " << N << " is " << sum;
    return 0;
}