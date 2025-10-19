// Input N elements in an array and print them.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter Number of Elements in Array: ";
    cin >> N;
    
    int myArr[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter the Element: ";
        cin >> myArr[i];
    }

    cout << "{ ";
    for (int j = 0; j < N; j++) {
        cout << myArr[j] << " ";
    }
    cout << "}";
    return 0;
}