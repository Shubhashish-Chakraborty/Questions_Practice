// Classify a person's age group: Child (< 13), Teenager (13-19), Adult (20-59), Senior (60+).

#include <iostream>
using namespace std;

int main() {

    unsigned int AGE;

    cout << "Enter Your Age: ";
    cin >> AGE;

    if (AGE <= 13) {
        cout << "CHILD" << endl;
    } else if (AGE >= 14 && AGE <= 19) {
        cout << "TEENAGER" << endl;
    } else if (AGE >= 20 && AGE <= 59) {
        cout << "ADULT" << endl;
    } else if (AGE >= 60) {
        cout << "OLD" << endl;
    }

    return 0;
}