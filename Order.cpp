#include "Order.h"

Order::Order(int id, Customer customer, vector<OrderItem> items, bool isPaid)
    : id(id), customer(customer), items(items), isPaid(isPaid) {
    orderDate = time(nullptr);
}

int Order::getId() const { return id; }
Customer Order::getCustomer() const { return customer; }
vector<OrderItem> Order::getItems() const { return items; }
time_t Order::getOrderDate() const { return orderDate; }
bool Order::getIsPaid() const { return isPaid; }

double Order::getTotalAmount() const {
    double sum = 0;
    for (auto& item : items)
        sum += item.getTotalPrice();
    return sum;
}
