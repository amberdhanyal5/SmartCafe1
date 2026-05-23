#include <iostream>
#include <fstream>

#include "../include/MenuItem.h"
#include "../include/Order.h"
#include "../include/Customer.h"

using namespace std;

int main() {

    try {

        // Menu Items
        MenuItem coffee("Coffee", 350, "Drinks");
        MenuItem burger("Burger", 700, "Fast Food");

        // Order Object
        Order order;

        // Add Items
        order.addItem(coffee, 2);
        order.addItem(burger, 1);

        // Display Receipt
        order.displayReceipt();

        // Remove Item Test
        cout << "\nRemoving Coffee...\n";

        order.removeItem("Coffee");

        // Display Again
        order.displayReceipt();

        // File Handling
        ofstream file("../data/menu.txt");

        if(!file) {
            throw runtime_error("File Error!");
        }

        file << coffee.getName()
             << "," << coffee.getPrice()
             << endl;

        file << burger.getName()
             << "," << burger.getPrice()
             << endl;

        file.close();

        cout << "\nMenu Saved To File\n";

    }

    catch(exception &e) {

        cout << "Error: "
             << e.what() << endl;
    }

    return 0;
}