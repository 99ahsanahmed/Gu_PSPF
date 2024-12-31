// Example : 3 String Input and Output:

#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name); // Supports spaces
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
