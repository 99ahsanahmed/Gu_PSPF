//Example : 2 concatenation & length
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[20] = "Hello "; //With space
    char str2[20] = "World";

    strcat(str1, str2); // Concatenation
    cout << "Concatenated String: " << str1 << endl;
    cout << "Length: " << strlen(str1) << endl;

    return 0;
}
