//
// Created by Guanhao Huang Chen on 1/17/23.
//

#include "AccountBank.h"

AccountBank::AccountBank() {
}

AccountBank::AccountBank(std::string username, std::string password)
{
    people = new PeopleNode;
    people->person.setUsername(username);
    people->person.setPassword(password);
}

void AccountBank::addPerson(std::string username, std::string password) {
    PeoplePtr ptr = new PeopleNode;
    ptr->person.setUsername(username);
    ptr->person.setPassword(password);
    if(people == NULL){
        people = ptr;
    } else{
        ptr->link = people;
        people = ptr;
    }

}

void AccountBank::addPerson(Person person) {
    PeoplePtr ptr = new PeopleNode;
    ptr->person.setUsername(person.getUsername());
    ptr->person.setPassword(person.getPassword());
    if(people == NULL){
        people = ptr;
    } else{
        ptr->link = people;
        people = ptr;
    }
}

void AccountBank::printPerson() {
for(PeoplePtr temp = people;temp->link!=NULL;temp= temp->link){
    std::cout<<temp->person<<std::endl;
}
}

