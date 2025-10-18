// Take two integers as input and print their sum, difference, product, and quotient.
#include <bits/stdc++.h>
using namespace std;

int calculate(int num1, int num2, string operation) {
    if (operation == "+") {
        return num1 + num2;
    } else if (operation == "-") {
        return num1 - num2;
    } else if (operation == "*") {
        return num1 * num2;
    } else if (operation == "/") {
        if (num2 == 0) {
            return 404;
        } else {
            return num1 / num2;
        }
    } else {
        return 404;
    }
}

int main() {
    string choice;
    int n1, n2;
    int answer;

    while (true) {
        cout << "Enter num1: ";
        cin >> n1;
        cout << "Enter num2: ";
        cin >> n2;

        cout << "1-> Sum, 2-> Subtraction, 3-> Multiplication, 4-> Division, 5-> Exit: ";
        cin >> choice;
        if (choice == "1") {
            answer = calculate(n1, n2, "+");
            cout << answer << endl;
        } else if (choice == "2") {
            answer = calculate(n1, n2, "-");
            cout << answer << endl;
        } else if (choice == "3") {
            answer = calculate(n1, n2, "*");
            cout << answer << endl;
        } else if (choice == "4") {
            answer = calculate(n1, n2, "/");
            cout << answer << endl;
        } else if (choice == "5") {
            break;
        }
    }
    return 0;
}