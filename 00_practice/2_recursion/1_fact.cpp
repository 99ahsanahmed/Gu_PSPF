#include <iostream>
using namespace std;

int fact(int n) {
    if (n < 1) {
        return 1 ; 
    }
    return n * fact(n-1); 
}

int main() {
    int n=5;
    // cout << "Enter the position (n) for fact: ";
    // cin >> n;
    cout<<fact(n);
    return 0;
}
