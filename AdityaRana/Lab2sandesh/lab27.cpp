#include <iostream>
#include <string>
using namespace std;

struct Expense
{
    string description;
    float amount;
    string category;
};

void addExpense(Expense expenses[], int &count)
{
    cin.ignore();

    cout << "\nEnter Expense Description: ";
    getline(cin, expenses[count].description);

    cout << "Enter Amount: ";
    cin >> expenses[count].amount;
    cin.ignore();

    cout << "Enter Category: ";
    getline(cin, expenses[count].category);

    count++;
}

float totalByCategory(Expense expenses[], int count, string category)
{
    float total = 0;

    for (int i = 0; i < count; i++)
    {
        if (expenses[i].category == category)
        {
            total += expenses[i].amount;
        }
    }

    return total;
}

int main()
{
    Expense expenses[10];
    int count = 0;

    cout << "Enter details for 5 expenses:\n";

    for (int i = 0; i < 5; i++)
    {
        addExpense(expenses, count);
    }

    cout << "\nTotal Food Expenses: "
         << totalByCategory(expenses, count, "Food") << endl;

    cout << "Total Travel Expenses: "
         << totalByCategory(expenses, count, "Travel") << endl;

    cout << "Total Other Expenses: "
         << totalByCategory(expenses, count, "Other") << endl;

    return 0;
}