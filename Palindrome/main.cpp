#include <iostream>
#include "Palindrome.h"
int main() {
    if(Palindrome::match("racecar")){
        std::cout << "true" << std::endl;
    } else{
        std::cout << "false" << std::endl;
    }
    return 0;
}
