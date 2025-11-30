#pragma once
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
    char categoryCode;
    bool inStock;
    int quantity;

public:
    Product(int id, string name, double price, char categoryCode, bool inStock, int quantity);

    int getId() const;
    string getName() const;
    double getPrice() const;
    char getCategoryCode() const;
    bool isInStock() const;
    int getQuantity() const;

    void setQuantity(int q);
};

