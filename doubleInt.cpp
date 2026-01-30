#include <iostream>
using namespace std;


int main() {
    int userInput;


    cout << "Enter your  integer to double: ";

    if (cin >> userInput) {
        int doubledValue = userInput * 2;
        cout << "Value is = " << doubledValue << endl;
    } else {
        cout << "This isnt a integer" << endl;
    }

    return 0;
}