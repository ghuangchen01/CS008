//
// Created by Guanhao Huang Chen on 2/2/23.
//

#ifndef PALINDROME_PALINDROME_H
#define PALINDROME_PALINDROME_H

#include <queue>
#include <stack>
#include <iostream>
class Palindrome {
private:
    static std::stack<char> stack;
    static std::queue<char> queue;
public:
    static bool match(const std::string& word);
};


#endif //PALINDROME_PALINDROME_H
