// Hands on exercise - 1
// Q : Write a program to count the number of vowels in a given string.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[20] = "Hello, I am Ahsan ";
    int vowels = 0;
    for (int i = 0; i <= strlen(str1); i++)
    {
        if (str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
        {
            vowels++;
        }
    }
    cout<<"The number of vowels in the string is "<<vowels;
    return 0;
}