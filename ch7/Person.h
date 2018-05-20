#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{

public:
    Person();
    Person(std::string name, std::string address);
    std::string getName();
    std::string getAddress();
    std::istream& read(std::istream& is, Person& p);
    std::ostream& print(std::ostream& os, const Person& p);

private:
    std::string name;
    std::string address;

};

#endif // !PERSON_H
