#pragma once
#include "Product.h"

class OrderItem {
private:
    int id;
    Product product;
    int quantity;

public:
    OrderItem(int id, Product product, int quantity);

    int getId() const;
    Product getProduct() const;
    int getQuantity() const;
    double getTotalPrice() const;
};

