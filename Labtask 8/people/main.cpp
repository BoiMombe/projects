#include <iostream>
#include "Person.h"
using namespace std;

int main()
{   
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << std::endl;
    return 0;
}
