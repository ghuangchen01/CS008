#include <iostream>
#include "AccountBank.h"
#include "Person.h"
void getAccountInfo(std::string& username, std::string& password);
int main() {
    AccountBank bank;
    char ans;
    do{
        std::string username;
        std::string password;
        getAccountInfo(username,password);
        bank.addPerson(username,password);
        bank.printPerson();
        std::cout<<"would you like to use the program again?(y/n)\n";
        std::cin>>ans;
    } while (ans!='n');


    return 0;
}
void getAccountInfo(std::string& username, std::string& password){
    std::cout<<"Please enter a username: \n";
    std::cin>>username;
    std::cout<<"Please enter a password: \n";
    std::cin>>password;
}