// Exercise 1: Basic Structure
// Define a Car structure with members: brand, model, and price.
// Write a program to create an instance of Car, take user input, and display the details.
#include<iostream>
using namespace std;
struct car{
    string brand;
    int model;
    long long int price;
};
int main()
{
    car mycar;
    cout<<"Enter brand : ";
    cin>>mycar.brand;
    cout<<endl;
    cout<<"Enter model : ";
    cin>>mycar.model;
    cout<<endl;
    cout<<"Enter price : ";
    cin>>mycar.price;
    cout<<endl;
    cout<<"Brand : "<<mycar.brand<<endl;
    cout<<"Model : "<<mycar.model<<endl;    
    cout<<"Price : "<<mycar.price<<endl;
    return 0;
}