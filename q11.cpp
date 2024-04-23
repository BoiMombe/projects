#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int daysUntilExpiration;

    do {
        daysUntilExpiration = rand() % 12; 

        if (daysUntilExpiration <= 0) {
            cout << "Your subscription has expired." << endl;
        } else if (daysUntilExpiration <= 1) {
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << std::endl;
        } else if (daysUntilExpiration <= 5) {
            cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
        } else if (daysUntilExpiration <= 10) {
            cout << "Your subscription will expire soon. Renew now!" << std::endl;
        } else {
            cout << "You have an active subscription." << endl;
        }
    } while (daysUntilExpiration < 0);

    return 0;
}
