#include <iostream>
using namespace std;


int main() {
    int userInput;


    cout << "Enter your  first integer: ";

    if (cin >> userInput) {
        int firstValue = userInput;
        cout << "please Enter your second integer" << endl;
        if (cin >> userInput) {
            int secondValue = userInput;
            cout << "Your value is: " << firstValue + secondValue << endl;
        }
        else {
            cout << "This isnt a integer" << endl;
        }


    } else {
        cout << "This isnt a integer" << endl;
    }

    return 0;
}