// Question 3:
// Write a program to find the first occurrence of the word "apple" in a string
#include<iostream>
using namespace std;
int main()
{
    string fruit = "apple";
    cout<<fruit[0] <<" is placed at " <<fruit.find("apple");
    return 0;
}