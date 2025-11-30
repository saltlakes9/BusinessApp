#pragma once
#include <vector>
#include <ctime>
#include "Customer.h"
#include "OrderItem.h"

class Order {
private:
    int id;
    Customer customer;
    vector<OrderItem> items;
    time_t orderDate;
    bool isPaid;

public:
    Order(int id, Customer customer, vector<OrderItem> items, bool isPaid);

    int getId() const;
    Customer getCustomer() const;
    vector<OrderItem> getItems() const;
    time_t getOrderDate() const;
    bool getIsPaid() const;

    double getTotalAmount() const;
};

