#include <iostream>
using namespace std;



int main() {
    string userInput;
    cout << "Please enter your name: " << endl;

    if (cin >> userInput) {
        cout << "Hello, " << userInput << "!" << endl;
    }
return 0;
}
