#include <iostream>
using namespace std;

void power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    cout << base << "^" << exponent << " = " << result << endl;
    return;
}
int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    power(base, exponent);

    return 0;
}
