#include <iostream>
using namespace std;

int main() {
    int numElements = 0;
    int* userNumbers = nullptr;

    cout << "How many numbers would you like to input? ";
    cin >> numElements;

    userNumbers = new int[numElements];

    if (userNumbers == nullptr) {
        cout << "Error: Unable to allocate memory";
    }
    else {
        for (int i = 0; i < numElements; i++) {
            cout << "Enter a number: ";
            cin >> userNumbers[i];
        }

        cout << "You have entered:" << endl;

        for (int j = 0; j < numElements; j++) {
            cout << userNumbers[j] << ", ";
        }

        delete[] userNumbers;
    }

    return 0;
}
