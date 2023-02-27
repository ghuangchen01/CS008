//
// Created by Guanhao Huang Chen on 2/2/23.
//

#include "Palindrome.h"

std::stack<char> Palindrome::stack;
std::queue<char> Palindrome::queue;
bool Palindrome::match(const std::string &word) {

    for(int i = 0;i<word.size();i++){
        if(isalpha(word[i])){
            stack.push(tolower(word[i]));
            queue.push(tolower(word[i]));
        }
    }
    bool match = true;
    for(int i = 0;i<stack.size();i++){
        if(stack.top()!=queue.front()){
            match = false;
        }
        stack.pop();
        queue.pop();
    }
    return match;
}
