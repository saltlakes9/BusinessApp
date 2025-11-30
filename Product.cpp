#include "Product.h"

Product::Product(int id, string name, double price, char categoryCode, bool inStock, int quantity)
    : id(id), name(name), price(price), categoryCode(categoryCode), inStock(inStock), quantity(quantity) {
}

int Product::getId() const { return id; }
string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
char Product::getCategoryCode() const { return categoryCode; }
bool Product::isInStock() const { return inStock; }
int Product::getQuantity() const { return quantity; }
void Product::setQuantity(int q) { quantity = q; }
