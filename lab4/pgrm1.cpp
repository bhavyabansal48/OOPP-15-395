#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price;
    Item(string n, int q, double p) : name(n), quantity(q), price(p) {}
};

void displayCart(const vector<Item>& cart) {
    for (const auto& item : cart) {
        cout << item.name << " " << item.quantity << " " << item.price << endl;
    }
}

double calculateTotal(const vector<Item>& cart) {
    double total = 0;
    for (const auto& item : cart) {
        total += item.quantity * item.price;
    }
    return total;
}

Item findMostExpensiveItem(const vector<Item>& cart) {
    Item maxItem = cart[0];
    for (const auto& item : cart) {
        if (item.price > maxItem.price) {
            maxItem = item;
        }
    }
    return maxItem;
}

void applyDiscount(vector<Item>& cart) {
    for (auto& item : cart) {
        if (item.price > 1000) {
            item.price *= 0.9;
        }
    }
}

int main() {
    vector<Item> cart = {
        {"Laptop", 1, 55000},
        {"Mouse", 2, 750},
        {"Keyboard", 1, 1200},
        {"Monitor", 1, 8000}
    };

    cout << "Cart items:\n";
    displayCart(cart);

    cout << "Total: " << calculateTotal(cart) << endl;

    Item expensive = findMostExpensiveItem(cart);
    cout << "Most expensive: " << expensive.name << endl;

    applyDiscount(cart);
    cout << "Cart after discount:\n";
    displayCart(cart);

    cout << "Updated total: " << calculateTotal(cart) << endl;
}
