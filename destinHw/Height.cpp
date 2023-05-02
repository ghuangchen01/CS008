//
// Created by Guanhao Huang Chen on 4/5/23.
//

#include "Height.h"

Height::Height() {
    feet = 0;
    inches = 0;

}

Height::Height(int f) {
    if(f >0){
        feet = f;
    } else{
        feet = 0;
    }
    inches =0;
}

Height::Height(int f, int i) {
    if(f >0){
        feet = f;
    } else{
        feet = 0;
    }
    if(i>0&&i<12){
        inches = i;
    } else{
        inches =0;
    }
}

void Height::setFeet(int f) {
    if(f >0){
        feet = f;
    }
}

void Height::setInches(int i) {
    if(i>0&&i<12){
        inches = i;
    }
}

int Height::getFeet() const {
    return feet;
}

int Height::getInches() const {
    return inches;
}

void Height::print() const {
    cout<<feet<<"' "<<inches;
}

void Height::adjust() {
    inches++;
    if(inches>=12){
        inches = 0;
        feet++;
    }
}

void Height::adjust(int i) {
    inches = totalInches();
    feet = 0;
    if(i+inches>0){
        inches = inches + i;
        cout<<"inches: "<<inches<<endl;
        while(inches>=12){
            inches = inches - 12;
            feet++;
        }
    }
}

int Height::totalInches() const {
    int tempFeet = feet;
    int tempInch = inches;
    while (tempFeet>0){
        tempFeet--;
        tempInch = tempInch + 12;
    }
    return tempInch;
}

bool Height::operator==(const Height &r) const {
    if(inches == r.inches&&feet==r.feet){
        return true;
    }
    return false;
}

bool Height::operator<(const Height &r) const {
    return totalInches()<r.totalInches();
}

ostream &operator<<(ostream &out, const Height &h) {
    out<<h.feet<<"' "<<h.inches;
    return out;
}
