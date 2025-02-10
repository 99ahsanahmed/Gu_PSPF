#include<iostream>
using namespace std;
struct librarian{
    string name;
};
struct library{
    string book;
    librarian author;
};
    library l1[3];
    void nestedStruct(){

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
}
struct myCar{
    string company;
    int model;
    string ownerName;
    int sell[5];

};
struct myCar yaris = {"toyota" , 2006 , "abdullah",{1,2,3,4,5}} ;
void accessStruct(){
    cout<<yaris.company<<"\n";
    cout<<yaris.model<<"\n";
    cout<<yaris.ownerName<<"\n";
    cout<<yaris.sell[2]<<"\n";
}
int main()
{
    accessStruct();

   
    return 0;
}