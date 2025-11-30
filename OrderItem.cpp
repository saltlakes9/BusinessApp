#include "OrderItem.h"

OrderItem::OrderItem(int id, Product product, int quantity)
    : id(id), product(product), quantity(quantity) {
}

int OrderItem::getId() const { return id; }
Product OrderItem::getProduct() const { return product; }
int OrderItem::getQuantity() const { return quantity; }
double OrderItem::getTotalPrice() const { return product.getPrice() * quantity; }
