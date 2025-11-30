// BusinessApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Product {
public:
    int id;
    string name;
    double price;
    char category;
    bool inStock;
    int quantity;
};

class Customer {
public:
    int id;
    string fullName;
    string email;
    bool isPremium;
};

class OrderItem {
public:
    Product product;
    int quantity;

    double totalPrice() {
        return product.price * quantity;
    }
};

class Order {
public:
    int id;
    Customer customer;
    vector<OrderItem> items;
    bool isPaid;

    double totalAmount() {
        double sum = 0;
        for (auto& item : items) sum += item.totalPrice();
        return sum;
    }
};

int main() {
    Product laptop{ 1, "Laptop", 1200.5, 'E', true, 5 };

    Customer c1{ 1, "Ivan Petrov", "ivan@example.com", true };

    OrderItem item1{ laptop, 2 };

    Order order1{ 1, c1, {item1}, true };

    cout << "Order ID: " << order1.id << endl;
    cout << "Customer: " << order1.customer.fullName << endl;
    cout << "Total: " << order1.totalAmount() << " USD" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
