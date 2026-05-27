#include<iostream>
using namespace std;

struct Expense
{
    string description;
    float amount;
    string category;
};

void addExpense(Expense expenses[], int &count)
{
    cout << "\nEnter description: ";
    cin >> expenses[count].description;

    cout << "Enter amount: ";
    cin >> expenses[count].amount;

    cout << "Enter category: ";
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
            total = total + expenses[i].amount;
        }
    }

    return total;
}

int main()
{
    Expense expenses[100];
    int count = 0;
    string category;

    addExpense(expenses, count);
    addExpense(expenses, count);

    cout << "\nEnter category to calculate total expense: ";
    cin >> category;

    cout << "Total Expense = "
         << totalByCategory(expenses, count, category);

    return 0;
}