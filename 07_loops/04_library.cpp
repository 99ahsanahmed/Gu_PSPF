#include <iostream>
using namespace std;
int main() {
    int nbook;
    float tfine;
    // NUMBER OF BOOKS
    cout<<"how many books rented?: "<<endl;
    cin>>nbook;
    for (int i = 1; i < nbook+1; i++)
    {
        int days;
        float fine=0.0;
        //NUMBER OF DAYS
        cout<<"book "<<i<<" was overdue for how many days?: "<<endl;
        cin>>days;
        for (int j = 0; j < days; j++)
        {
            fine = fine + 0.50;
        }
        tfine=tfine+fine;
        cout<<"fine for book: "<<i<<"is "<<"$"<<fine<<endl;
    }
    cout<<"total fine is:"<<tfine;
    return 0;
}