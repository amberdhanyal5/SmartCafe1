#include "../include/Order.h"
#include <iostream>
using namespace std;

void Order::addItem(MenuItem item, int qty) {
    items.push_back(item);
    quantity.push_back(qty);
}

void Order::removeItem(string itemName) {

    for(int i=0; i<items.size(); i++) {

        if(items[i].getName() == itemName) {

            items.erase(items.begin() + i);
            quantity.erase(quantity.begin() + i);

            cout << "Item Removed\n";
            return;
        }
    }

    cout << "Item Not Found\n";
}

double Order::calculateSubtotal() {

    double subtotal = 0;

    for(int i=0; i<items.size(); i++) {

        subtotal += items[i].getPrice() * quantity[i];
    }

    return subtotal;
}

double Order::calculateTax() {
    return calculateSubtotal() * 0.05;
}

double Order::calculateTotal() {
    return calculateSubtotal() + calculateTax();
}

void Order::displayReceipt() {

    if(items.empty()) {
        throw runtime_error("Order is empty!");
    }

    cout << "\n------ Smart Cafe ------\n";

    for(int i=0; i<items.size(); i++) {

        cout << items[i].getName()
             << " x" << quantity[i]
             << " = Rs."
             << items[i].getPrice() * quantity[i]
             << endl;
    }

    cout << "----------------------\n";

    cout << "Subtotal: "
         << calculateSubtotal() << endl;

    cout << "Tax: "
         << calculateTax() << endl;

    cout << "Total: "
         << calculateTotal() << endl;
}