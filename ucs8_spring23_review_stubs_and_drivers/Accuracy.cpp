//
// Created by Dave R. Smith on 1/10/23.
//

#include "Accuracy.h"
Accuracy::Accuracy()
{

}

std::ostream &operator<<(std::ostream &os, const Accuracy &accuracy)
{
    for(int i = 0; i < accuracy.wrongletter.size(); i++)
    {
        os << accuracy.wrongletter[i] << " ";
    }
    os << std::endl;
    return os;
}

void Accuracy::pushback(char let)
{
    wrongletter.push_back(let);
}
