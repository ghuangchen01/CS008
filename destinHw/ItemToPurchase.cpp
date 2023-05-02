//
// Created by Guanhao Huang Chen on 4/5/23.
//

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "";
    itemPrice = 0;
    itemQuantity = 0;
    totalPrice = 0;
}

void ItemToPurchase::SetName(string name) {
    itemName = name;
}

string ItemToPurchase::GetName() {
    return itemName;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

int ItemToPurchase::GetPrice() {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

int ItemToPurchase::GetQuantity() {
    return itemQuantity;
}

int ItemToPurchase::GetTotalPrice() {
    totalPrice = itemPrice * itemQuantity;
    return totalPrice;
}

void ItemToPurchase::PrintInfo() {
    cout<<itemName<<" "<<itemQuantity<<" @ $"<<itemPrice<<" = $"<<GetTotalPrice();
}
