// Bonus Exercise (Optional): Sorting
// Sort an array of Student structures based on their marks in descending order.
#include<iostream>
using namespace std;
struct student{
    string name;
    int marks;
};

int bubblesort(student students[],int n){
    for (int past = 0; past < n; past++)
    {
        for (int comp = 0; comp < n-1; comp++)
        {
            if (students[comp].marks < students[comp + 1].marks )// for > ascending
            {
                swap(students[comp],students[comp+1]);
            }
        }
    }
}
int main()
{
    student students[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter name of student "<<i+1<<endl;
        cin>>students[i].name;
        cout<<"Enter marks of student "<<i+1<<endl;
        cin>>students[i].marks;    
    }

    // BUBBLE SORT
    bubblesort(students,3);

    for (int l = 0; l < 3; l++)
    {
        cout<<"Name : "<<students[l].name<<endl;
        cout<<"Marks : "<<students[l].marks<<endl;
    }
    return 0;
}