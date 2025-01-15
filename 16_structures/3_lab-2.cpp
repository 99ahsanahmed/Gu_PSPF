// Exercise 2: Array of Structures
// Define a Book structure with members: title, author, and price.
// Write a program to store details of 5 books and display the most expensive one.

#include<iostream>
using namespace std;
struct book{
    string title;
    string author;
    int price;
};
int main()
{
    book books[5];
    int expensive = 0;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Book "<<i+1<<endl;
        cout<<"Enter book title: ";
        cin>>books[i].title;
        cout<<"Enter book author: ";
        cin>>books[i].author;
        cout<<"Enter book price: ";
        cin>>books[i].price;
        cout<<endl;
    }
    for (int j = 0; j < 5; j++)
    {
        cout<<"Book "<<j+1<<endl;
        cout<<"Title: "<<books[j].title<<endl;
        cout<<"Author: "<<books[j].author<<endl;
        cout<<"Price: "<<books[j].price<<endl;
    }
    for (int k = 0; k < 5; k++)
    {
        if (expensive < books[k].price)
        {  
            expensive = books[k].price;
        }
    }
    cout<<"Most expensive book is : "<<endl;
    for (int z = 0; z < 5; z++)
    {
        if (expensive == books[z].price)
        {
            cout<<"title: "<<books[z].title<<endl;
            cout<<"author: "<<books[z].author<<endl;
            cout<<"Price "<<books[z].price<<endl;
        }
    }
    return 0;
}