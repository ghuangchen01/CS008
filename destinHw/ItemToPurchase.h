//
// Created by Guanhao Huang Chen on 4/5/23.
//

#ifndef DESTINHW_ITEMTOPURCHASE_H
#define DESTINHW_ITEMTOPURCHASE_H
#include "iostream"
using namespace std;
class ItemToPurchase {
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
    int totalPrice;
public:
    ItemToPurchase();
    void SetName(string name);
    string GetName();
    void SetPrice(int price);
    int GetPrice();
    void SetQuantity(int quantity);
    int GetQuantity();
    void PrintInfo();
    int GetTotalPrice();
};


#endif //DESTINHW_ITEMTOPURCHASE_H
