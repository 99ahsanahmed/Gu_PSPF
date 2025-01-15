#include <iostream>
using namespace std;
struct Student {
    char name[50];
    int age;
    float marks[5];  // Array of marks for 5 subjects
};

int main() {
    Student student1 = { "Alice", 20, {85.5, 90.0, 78.5, 88.0, 92.0} };

    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;

    // Displaying marks without a loop
    cout << "Marks: ";
    cout << student1.marks[0] << " ";
    cout << student1.marks[1] << " ";
    cout << student1.marks[2] << " ";
    cout << student1.marks[3] << " ";
    cout << student1.marks[4] << endl;

    return 0;
}
