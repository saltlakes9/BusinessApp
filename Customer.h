#pragma once
#include <string>
using namespace std;

class Customer {
private:
    int id;
    string fullName;
    string email;
    string phone;
    bool isPremium;

public:
    Customer(int id, string fullName, string email, string phone, bool isPremium);

    int getId() const;
    string getFullName() const;
    string getEmail() const;
    string getPhone() const;
    bool getIsPremium() const;
};
#pragma once
