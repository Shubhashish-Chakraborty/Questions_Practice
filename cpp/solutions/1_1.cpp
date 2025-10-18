// Write a program to print your name, age, and city.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string username, city;
    unsigned int age;

    cout << "Enter Name:";
    cin >> username;

    cout << "Enter City:";
    cin >> city;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Your Name is " << username << ", you are " << age << " years old from " << city << endl;
    
    return 0;
}