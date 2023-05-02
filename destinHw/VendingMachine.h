//
// Created by Guanhao Huang Chen on 4/5/23.
//

#ifndef DESTINHW_VENDINGMACHINE_H
#define DESTINHW_VENDINGMACHINE_H
#include "iostream"
using namespace std;
class VendingMachine {

public:
    VendingMachine();
    void Purchase(int amount);
    int GetInventory();
    void Restock(int amount);
    void Report();

private:
    int bottles;
};


#endif //DESTINHW_VENDINGMACHINE_H
