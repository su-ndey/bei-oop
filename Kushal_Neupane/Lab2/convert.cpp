#include<iostream>
using namespace std;

float convertCurrency(float amount, float rate)
{
    return amount * rate;
}

int main()
{
    float amount, rate, converted;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Enter conversion rate: ";
    cin >> rate;

    converted = convertCurrency(amount, rate);

    cout << "Converted Amount = " << converted;

    return 0;
}