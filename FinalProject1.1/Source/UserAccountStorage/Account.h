//
// Created by Guanhao Huang Chen on 4/27/23.
//

#ifndef FINALPROJECT1_1_ACCOUNT_H
#define FINALPROJECT1_1_ACCOUNT_H
#include "iostream"
#include "vector"
#include "fstream"

class Account {
private:
    static std::vector<std::string> userName;
    static std::vector<std::string> password;
    static void loadFile();
public:
    static bool checkAccount(std::string u,std::string p);
    static void addAccount(std::string u,std::string p);
    static bool hasRepeats();
    static bool hasRepeats(std::string u);
    static void removeRepeats();
};


#endif //FINALPROJECT1_1_ACCOUNT_H
