//
// Created by Guanhao Huang Chen on 4/27/23.
//

#include "Account.h"
#include "sstream"
std::vector<std::string> Account::userName;
std::vector<std::string> Account::password;

bool Account::checkAccount(std::string u, std::string p) {
    loadFile();
    bool find = false;
    for(int i =0;i<userName.size();i++){
        if(userName[i]==u&&password[i]==p){
            find = true;
        }
    }
    return find;
}

void Account::loadFile() {
    if (!userName.empty()) {
        userName.clear();
        password.clear();
    }

    std::ifstream inputFile("Source/userAccountStorage/accounts.txt");
    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::stringstream ss(line);

            std::string username, pass;
            if (ss >> username >> pass) {
                userName.push_back(username);
                password.push_back(pass);
            }
        }
        inputFile.close();
    } else {
        std::cout << "Unable to open the file for reading." << std::endl;
    }
}

void Account::addAccount(std::string u, std::string p) {
    loadFile();

    std::ofstream outputFile("Source/userAccountStorage/accounts.txt", std::ios::trunc);
    userName.push_back(u);
    password.push_back(p);
    if (hasRepeats()) {
        removeRepeats();
    }
    for (int i = 0; i < userName.size(); i++) {
        outputFile << userName[i] << " " << password[i] << std::endl;
    }
    outputFile.close();
}
bool Account::hasRepeats() {
    for (int i = 0; i < userName.size(); ++i) {
        for (int j = i + 1; j < userName.size(); ++j) {
            if (userName[i] == userName[j]) {
                return true;
            }
        }
    }
    return false;
}

void Account::removeRepeats() {
    std::vector<std::string> tempUserNames;
    std::vector<std::string> tempPasswords;

    for (int i = 0; i < userName.size(); ++i) {
        bool isDuplicate = false;
        for (int j = i + 1; j < userName.size(); ++j) {
            if (userName[i] == userName[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            tempUserNames.push_back(userName[i]);
            tempPasswords.push_back(password[i]);
        }
    }

    userName.swap(tempUserNames);
    password.swap(tempPasswords);
}

bool Account::hasRepeats(std::string u) {
    Account::loadFile();

    for (int i = 0; i < userName.size(); ++i) {
        if (userName[i] == u) {
            return true;
        }
    }
    return false;
}


