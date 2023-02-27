//
// Created by Dave R. Smith on 1/12/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_NOWORDEXCEPTION_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_NOWORDEXCEPTION_H
#include <exception>
#include <string>
class NoWordException : public std::exception
{
private:
    char* message;
public:
    NoWordException();
    NoWordException(char* message);
    NoWordException( std::string& message);
    const char* what() noexcept;
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_NOWORDEXCEPTION_H
