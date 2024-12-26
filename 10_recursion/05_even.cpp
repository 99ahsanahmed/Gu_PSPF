#include <iostream>
using namespace std;
int even(int n) {
    if (n <= 0) return 0;
    if (n % 2 == 0) {
        cout<<n<<endl;
        return 1 + even(n - 1);
    }
    else {
        return even(n - 1);
    }
}
int main() {
    int n=6;
    // cout << "Enter a number: ";
    // cin >> n;
    cout << "even numbers from 1 to " << n << " are: " << even(n) << endl;
    return 0;
}
