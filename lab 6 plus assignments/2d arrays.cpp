#include <iostream>
using namespace std;

int main() {
    int numRows, numColumns;
    
    do {
        cout << "Enter the number of rows (not more than 3): ";
        cin >> numRows;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (numRows > 3);

    do {
        cout << "Enter the number of columns (not more than 3): ";
        cin >> numColumns;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (numColumns > 3);

    double* myArray = new double[numRows * numColumns];

    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < numRows; ++i)
        for (int j = 0; j < numColumns; ++j)
            cin >> myArray[i * numColumns + j];

    cout << "Values of each element of the array:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numColumns; ++j)
            cout << myArray[i * numColumns + j] << " ";
        cout << endl;
    }

    delete[] myArray;

    return 0;
}
