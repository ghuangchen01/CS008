//
// Created by Guanhao Huang Chen on 2/13/23.
//

#include "Chapter5Num11.h"

Chapter5Num11::Chapter5Num11() {

}

LinkedList<int> Chapter5Num11::storeInt(int digit) {
    int num;
    int temp = 0;
    int i = 0;
    LinkedList<int> list;
    while (digit!=0){
        if(i<3){
            num = digit%10;
            digit = digit/10;
            for(int j = 0;j<i;j++){
                num = num * 10;
            }
            temp = temp + num;
            i++;
        }
        if(i==3 || digit==0){
            i=0;
            list.push_front(temp);
            temp = 0;
        }
    }
    return list;
}

int Chapter5Num11::getNumber(const LinkedList<int> numb) {
    LinkedList<int> tempNumber = numb;
    int size = tempNumber.size();
    std::string num = "";
    std::string temp = "";
    for(int i = 0;i<size;i++){
        temp = std::to_string(tempNumber.back());
        tempNumber.pop_back();
        int newSize = 3- temp.size();
        if(temp.size()<3&&i!=size-1){
            for(int j = 0;j<newSize;j++){
                temp = "0"+temp;
            }
        }
        num = temp + num;
    }
    return std::stoi(num);
}

Chapter5Num11::Chapter5Num11(int digit) {
    number = storeInt(digit);
}

Chapter5Num11& Chapter5Num11::operator+(Chapter5Num11 digit) {
    int num1 = getNumber(number);
    int num2 = getNumber(digit.number);
    int tempResult =  num1 + num2;
    number = storeInt(tempResult);
    return *this;
}


Chapter5Num11& Chapter5Num11::operator-( Chapter5Num11 digit) {
    int num1 = getNumber(number);
    int num2 = getNumber(digit.number);
    int tempResult =  num1 - num2;
    number = storeInt(tempResult);
    return *this;
}


Chapter5Num11& Chapter5Num11::operator*(Chapter5Num11 digit) {
    int num1 = getNumber(number);
    int num2 = getNumber(digit.number);
    int tempResult =  num1 * num2;
    number = storeInt(tempResult);
    return *this;
}


Chapter5Num11& Chapter5Num11::operator/( Chapter5Num11 digit) {
    int num1 = getNumber(number);
    int num2 = getNumber(digit.number);
    int tempResult =  num1 / num2;
    number = storeInt(tempResult);
    return *this;
}

Chapter5Num11& Chapter5Num11::operator=(Chapter5Num11 &digit) {
    number = digit.number;
    return *this;
}


std::ostream &operator<<(std::ostream& out, Chapter5Num11& digit) {
    out<<digit.getNumber(digit.number);
    return out;
}
