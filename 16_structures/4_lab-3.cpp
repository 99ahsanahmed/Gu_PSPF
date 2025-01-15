// Exercise 3: Nested Structures
// Define a Library structure containing Book (nested) and librarian name.
// Write a program to input and display library details.
#include<iostream>
using namespace std;
struct librarian{
    string name;
};
struct library{
    string book;
    librarian author;
};
int main()
{
    library l1[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Book "<<i+1<<endl;
        cout<<"Enter book name : ";
        cin>>l1[i].book;
        cout<<"Enter author name : ";
        cin>>l1[i].author.name;
        cout<<endl;
    }
    for (int j = 0; j < 3; j++)
    {
        cout<<"Book "<<j+1<<endl;
        cout<<"Book name : "<<l1[j].book<<endl;
        cout<<"Author name : "<<l1[j].author.name<<endl;
        cout<<endl;
    }
    return 0;
}
