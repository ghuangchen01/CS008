//
// Created by Guanhao Huang Chen on 1/17/23.
//

#ifndef PROJECT1_ACCOUNTBANK_H
#define PROJECT1_ACCOUNTBANK_H
#include "Person.h"
#include <stack>
typedef struct PeopleNode* PeoplePtr;
struct PeopleNode{
    Person person;
    PeoplePtr link;
};
class AccountBank {
private:
    PeoplePtr people;
public:
    AccountBank();
    AccountBank(std::string username,std::string password);
    void addPerson(std::string username, std::string password);
    void addPerson(Person person);
    void printPerson();
};


#endif //PROJECT1_ACCOUNTBANK_H
