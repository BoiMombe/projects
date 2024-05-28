#include "Person.h"

Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

Person::Person(const std::string& name, float newWeight) : mWeight(newWeight), mFirstName(name), mAge(0) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) const {
    return this->mWeight + otherPerson.mWeight;
}
