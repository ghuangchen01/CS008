//
// Created by Guanhao Huang Chen on 2/19/23.
//

#ifndef CS8_SPRING23_SFML_CALCULATOR_RPN_H
#define CS8_SPRING23_SFML_CALCULATOR_RPN_H
#include <iostream>
#include <vector>
class RPN {
public:
    RPN();
    void calculation(std::vector<std::string> &num, std::vector<std::string> &oper);
};


#endif //CS8_SPRING23_SFML_CALCULATOR_RPN_H
