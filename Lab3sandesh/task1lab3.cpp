#include <iostream>
using namespace std;

int compute(int a, int b) {
    return a + b;
}

float compute(float a, float b) {
    return a * b;
}

int main() {
    cout << compute(5, 7) << endl;
    cout << compute(2.5f, 4.0f) << endl;
    return 0;
}