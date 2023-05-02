//
// Created by Guanhao Huang Chen on 4/5/23.
//

#ifndef DESTINHW_HEIGHT_H
#define DESTINHW_HEIGHT_H
#include "iostream"
using namespace std;

class Height {
private:
    int feet;
    int inches;
public:
    Height();
    Height(int f);
    Height(int f,int i);
    void setFeet(int f);
    void setInches(int i);
    int getFeet() const;
    int getInches() const;
    void print() const;
    void adjust();
    void adjust(int i);
    int totalInches() const;
    bool operator==(const Height &r) const;
    bool operator<(const Height &r)const;
    friend ostream& operator<<(ostream& out,const Height& h);


};


#endif //DESTINHW_HEIGHT_H
