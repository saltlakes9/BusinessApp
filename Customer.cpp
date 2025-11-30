#include "Customer.h"

Customer::Customer(int id, string fullName, string email, string phone, bool isPremium)
    : id(id), fullName(fullName), email(email), phone(phone), isPremium(isPremium) {
}

int Customer::getId() const { return id; }
string Customer::getFullName() const { return fullName; }
string Customer::getEmail() const { return email; }
string Customer::getPhone() const { return phone; }
bool Customer::getIsPremium() const { return isPremium; }
