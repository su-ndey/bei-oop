#include <iostream>
#include <string>
using namespace std;

struct Product
{
    string name;
    int code;
    float price;
    int quantity;
};

int main()
{
    Product products[5];

    cout << "Enter details of 5 products:\n";

    for (int i = 0; i < 5; i++)
    {
        cin.ignore();

        cout << "\nProduct " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, products[i].name);

        cout << "Code: ";
        cin >> products[i].code;

        cout << "Price: ";
        cin >> products[i].price;

        cout << "Quantity: ";
        cin >> products[i].quantity;
    }

    cout << "\nProducts with quantity less than 10:\n";

    for (int i = 0; i < 5; i++)
    {
        if (products[i].quantity < 10)
        {
            cout << "\nName: " << products[i].name << endl;
            cout << "Code: " << products[i].code << endl;
            cout << "Price: " << products[i].price << endl;
            cout << "Quantity: " << products[i].quantity << endl;
        }
    }

    return 0;
}