#include <iostream>
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
    Product p[5];

    cout << "Enter details of 5 products:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "\nProduct " << i + 1 << endl;

        cout << "Name: ";
        cin >> p[i].name;

        cout << "Code: ";
        cin >> p[i].code;

        cout << "Price: ";
        cin >> p[i].price;

        cout << "Quantity: ";
        cin >> p[i].quantity;
    }

    cout << "\nProducts with quantity less than 10:\n";

    for(int i = 0; i < 5; i++)
    {
        if(p[i].quantity < 10)
        {
            cout << "\nName: " << p[i].name;
            cout << "\nCode: " << p[i].code;
            cout << "\nPrice: " << p[i].price;
            cout << "\nQuantity: " << p[i].quantity << endl;
        }
    }

    system("pause");
    return 0;
}