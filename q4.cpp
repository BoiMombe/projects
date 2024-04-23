#include <iostream>
using namespace std;

bool isValidNumber(const string& str);

int main() {
    while (true) {
        string input;
        int inputVar;
        cout << "Please enter a number between 5 and 10: ";
        cin >> input;

        if (!isValidNumber(input)) {
            cout << "Invalid input. Please enter a valid number. Try again." << endl;
            continue;
        }

        inputVar = stoi(input);

        if (inputVar < 5 || inputVar > 10) {
            cout << "You entered " << inputVar << ". The number must be between 5 and 10." << endl;
            continue;
        }

        cout << "Your input (" << inputVar << ") has been accepted." << endl;
        break;
    }

    return 0;
}

bool isValidNumber(const string& str) {
    for (char ch : str) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}
