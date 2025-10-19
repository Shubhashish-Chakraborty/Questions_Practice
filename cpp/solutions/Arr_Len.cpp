// Find the length of the array automatically:

#include <bits/stdc++.h>
using namespace std;

void usingVectors() {
    vector<string> usernames = {"Aryan" , "Shubh", "Shahrukh"};

    cout << "{ ";
    for (int i = 0; i < usernames.size(); i++) {
        cout << usernames[i] << " ";
    }
    cout << "}" << endl;

}

int main() {
    int myArr[] = {12,14,15,2};

    cout << "{ ";
    for (int i = 0; i < sizeof(myArr)/sizeof(myArr[0]); i++) {
        cout << myArr[i] << " ";
    }
    cout << "}" << endl;
    
    usingVectors();
    return 0;
}