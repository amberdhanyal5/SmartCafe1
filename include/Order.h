#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "MenuItem.h"

class Order {
private:
    vector<MenuItem> items;
    vector<int> quantity;

public:
    void addItem(MenuItem item, int qty);
    void removeItem(string itemName);

    double calculateSubtotal();
    double calculateTax();
    double calculateTotal();

    void displayReceipt();
};

#endif