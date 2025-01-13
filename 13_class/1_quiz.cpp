#include <iostream>
using namespace std;

bool PrimeFunc(int num){
    bool isPrime = true;
    if (num <= 1) {
        isPrime = false;
        // 0 and 1 are not prime
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false; // Found a divisor
                break;
            }
        }
    }
    if (isPrime) {
        return true;
    } else {
        return false;
    }

}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (PrimeFunc(num))
    {
        cout<<"It is a prime number.";
    }else{
        cout<<"It is not a prime number.";
    }
    
    ;
    return 0;
}
