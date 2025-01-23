#include <iostream>
using namespace std;
int main() {
// Regular variable
int temperature = 25;
int* tempPtr; // Pointer variable
tempPtr = &temperature; // Store the address of temperature in tempPtr
cout << "Temperature value: " << temperature << endl;
cout << "Temperature address: " << &temperature << endl;
cout << "Pointer value (address it stores): " << tempPtr << endl;
cout << "Value pointed to by pointer and manipulation: " << *tempPtr + 1 << endl;
return 0;
}