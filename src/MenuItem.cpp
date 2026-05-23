#include "../include/MenuItem.h"

MenuItem::MenuItem() {}

MenuItem::MenuItem(string n, double p, string c) {
    name = n;
    price = p;
    category = c;
}

string MenuItem::getName() {
    return name;
}

double MenuItem::getPrice() {
    return price;
}

string MenuItem::getCategory() {
    return category;
}

void MenuItem::display() {
    cout << name << " - Rs." << price
         << " (" << category << ")" << endl;
}
