//
// Created by Dave R. Smith on 1/12/23.
//

#include "NoWordException.h"

NoWordException::NoWordException()
: NoWordException("No word was found")
{

}

NoWordException::NoWordException( char *message)
: message(message)
{

}

NoWordException::NoWordException( std::string &message)
{
    this->message = (char*)message.c_str();
}

const char *NoWordException::what() noexcept
{
    return message;
}

