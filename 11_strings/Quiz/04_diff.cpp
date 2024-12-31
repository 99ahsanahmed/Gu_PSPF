// Question 4:
// Explain the difference between strcpy and = for string assignment.
#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    //DIFFERENCE
    //str1 = str2; // "=" Cannot be used to copy character arrays, whereas "strcpy()" can be used to copy character arrays from one array to another.
    strcpy(str1, str2);
    cout << str1 << endl; 
    return 0;
}