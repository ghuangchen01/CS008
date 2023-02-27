//
// Created by Dave R. Smith on 1/10/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_ACCURACY_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_ACCURACY_H
#include <vector>
#include <ostream>

class Accuracy
{
public:
    Accuracy();
    void pushback(char let);

    friend std::ostream& operator<<(std::ostream &os, const Accuracy &accuracy);

private:
    std::vector<char> wrongletter;
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_ACCURACY_H
