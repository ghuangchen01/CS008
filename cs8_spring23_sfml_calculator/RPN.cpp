//
// Created by Guanhao Huang Chen on 2/19/23.
//

#include <iomanip>
#include "RPN.h"

RPN::RPN() {

}

void RPN::calculation(std::vector<std::string> &num, std::vector<std::string> &oper) {
    double answer = 0;
    int operSize = oper.size();
    for(int i = 0;i<operSize;i++){
            if(oper[i] == "+"){
                answer = std::stod(num[i]) + std::stod(num[i+1]);
            }if(oper[i] == "-"){
                answer = std::stod(num[i]) - std::stod(num[i+1]);
            }if(oper[i] == "x"){
                answer = std::stod(num[i]) * std::stod(num[i+1]);
            }if(oper[i] == "/"){
                answer = std::stod(num[i]) / std::stod(num[i+1]);
            }if(oper[i] == "%"){
                std::cout<<"%\n";
                answer = std::stod(num[i]) / 100;
            }if(oper[i] == "+/-"){
                answer = std::stod(num[i]) * -1;
            }
    }
    while (!num.empty()){
        num.pop_back();
    }
    while (!oper.empty()){
        oper.pop_back();
    }
    num.push_back(std::to_string(answer));
    oper.push_back(",");
}
