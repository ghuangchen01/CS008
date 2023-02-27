//
// Created by Guanhao Huang Chen on 1/17/23.
//

#include "Person.h"
#include <iostream>
Person::Person() {

}

Person::Person(std::string username, std::string password)
:username(username),password(password){

}

std::string Person::getUsername() {
    return username;
}

std::string Person::getPassword() {
    return password;
}

void Person::setUsername(std::string username) {
this->username = username;
}

void Person::setPassword(std::string password) {
    this->password = password;
}

std::ostream &operator<<(std::ostream &out, Person person) {
    out<<"username: "<<person.username<<std::endl<<"password: "<<person.password<<std::endl;
    return out;
}
