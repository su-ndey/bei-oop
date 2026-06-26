#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (is_prime(n))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
 cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}