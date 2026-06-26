#include <iostream>
using namespace std;

struct Expense
{
    string description;
    float amount;
    string category;
};

void addExpense(Expense expenses[], int &count)
{
    cout << "\nEnter Description: ";
    cin >> expenses[count].description;

    cout << "Enter Amount: ";
    cin >> expenses[count].amount;

    cout << "Enter Category: ";
    cin >> expenses[count].category;

    count++;
}

float totalByCategory(Expense expenses[], int count, string category)
{
    float total = 0;

    for(int i = 0; i < count; i++)
    {
        if(expenses[i].category == category)
        {
            total += expenses[i].amount;
        }
    }

    return total;
}

int main()
{
    Expense expenses[5];
    int count = 0;

    cout << "Enter 5 expenses:\n";

    for(int i = 0; i < 5; i++)
    {
        addExpense(expenses, count);
    }

    cout << "\nTotal Food Expense = "
         << totalByCategory(expenses, count, "Food");

    cout << "\nTotal Travel Expense = "
         << totalByCategory(expenses, count, "Travel");

    system("pause");
    return 0;
}