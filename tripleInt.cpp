#include <iostream>
using namespace std;


int main() {
    int userInput;


    cout << "Enter your  integer to triple: ";

    if (cin >> userInput) {
        int tripledValue = userInput * 3;
        cout << "Value is = " << tripledValue << endl;
    } else {
        cout << "This isnt a integer" << endl;
    }

    return 0;
}