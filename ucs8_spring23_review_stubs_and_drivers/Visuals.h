//
// Created by Dave R. Smith on 1/10/23.
//

#ifndef UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_VISUALS_H
#define UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_VISUALS_H

#include <string>
#include <ostream>

class Visuals
{
private:
    //30, 44, 43, 45, 57, 59
    std::string board = "  +---------+\n"
                        "  |         |\n"
                        "            |\n"
                        "            |\n"
                        "            |\n"
                        "________________\n";
public:
    void updateBoard(int accuracy);
    friend std::ostream& operator<<(std::ostream& os, const Visuals& visuals);
};


#endif //UCS8_SPRING23_REVIEW_STUBS_AND_DRIVERS_VISUALS_H
