//Example : 1 String Input and Output:
#include <iostream>
using namespace std;

int main() {
    char name[50];
    cout << "Enter your name: ";
    cin >> name; // Stops at whitespace
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
