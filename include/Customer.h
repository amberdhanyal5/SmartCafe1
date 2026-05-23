#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"
#include "Order.h"
#include <vector>

class Customer : public Person {
private:
    int customerID;
    vector<Order> orders;

public:
    Customer(string n, int id);

    void placeOrder(Order order);
    void viewHistory();
};

#endif