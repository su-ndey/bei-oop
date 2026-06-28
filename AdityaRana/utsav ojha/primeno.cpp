#include<iostream>
using namespace std;
int is_prime(int n) {
    int i;
    if (n <= 1) return 0;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;   

}
int main() {
    int num,count=0 ;
    cout << "Enter a number: ";
    cin >> num;
    for(int i=1;i<=num;i++) {
        if(is_prime(i)) {
            count++;
        }
    }
    if (is_prime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}