#pragma once
#include <string>
using namespace std;

class Person
{
public:
    // Constructors
    Person();
    explicit Person(float newWeight);
    Person(const std::string& name, float newWeight);

    // Destructor
    ~Person();

    // Overloaded + operator
    float operator+(const Person& otherPerson) const;

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
