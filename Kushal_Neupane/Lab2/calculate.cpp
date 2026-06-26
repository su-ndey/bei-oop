#include<iostream>
using namespace std;

struct Item
{
    string name;
    float price;
};

float calculateBill(Item i)
{
    float tax = i.price * 0.10;
    return i.price + tax;
}

int main()
{
    Item i;

    cout << "Enter item name: ";
    cin >> i.name;

    cout << "Enter item price: ";
    cin >> i.price;

    float totalBill = calculateBill(i);

    cout << "Total bill with 10% tax = " << totalBill;

    return 0;
}