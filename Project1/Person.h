//
// Created by Guanhao Huang Chen on 1/17/23.
//

#ifndef PROJECT1_PERSON_H
#define PROJECT1_PERSON_H
#include <string>
#include <iostream>
class Person {
private:
    std::string username;
    std::string password;
public:
    Person();
    Person(std::string username, std::string password);
    std::string getUsername();
    std::string getPassword();
    void setUsername(std::string username);
    void setPassword(std::string password);
    friend std::ostream& operator<<(std::ostream& out,Person person);
};


#endif //PROJECT1_PERSON_H
