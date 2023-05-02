//
// Created by Guanhao Huang Chen on 4/5/23.
//

#include "VendingMachine.h"
VendingMachine::VendingMachine() {
    bottles = 20;
}

void VendingMachine::Purchase(int amount) {
    bottles = bottles - amount;
}

int VendingMachine::GetInventory() {
    return bottles;
}


void VendingMachine::Restock(int amount) {
    bottles = bottles + amount;
}

void VendingMachine::Report() {
    cout<<"Inventory: "<<GetInventory()<<" bottles\n";
}