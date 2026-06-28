#include<iostream>
using namespace std;

int main()
{
    float sales[7], total = 0, average;

    cout << "Enter sales amount for 7 days:\n";

    for(int i = 0; i < 7; i++)
    {
        cout << "Day " << i + 1 << ": ";
        cin >> sales[i];

        total = total + sales[i];
    }

    average = total / 7;

    cout << "\nTotal Sales = " << total;
    cout << "\nAverage Sales = " << average;

    return 0;
}