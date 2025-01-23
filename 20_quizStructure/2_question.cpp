#include<iostream>
#include<string>
using namespace std;

struct emp {
    string nm;
    int idd;
    string desg;
    float sal;
};

void input(emp emps[], int n){
    for (int a=0;a<n;a++){
        cout<<"Details for Employee "<<(a+1)<<":\n";
        cout<<"Name: ";
        getline(cin>>ws, emps[a].nm);
        cout<<"ID: ";
        cin>>emps[a].idd;
        cout<<"Designation: ";
        getline(cin>>ws, emps[a].desg);
        cout<<"Salary: ";
        cin>>emps[a].sal;
    }
}

void display(emp empArr[],int total){
    cout<<"\nEmp Details:\n";
    cout<<"ID\tName\tDesignation\tSalary\n";
    cout<<"---------------------------------------\n";
    for(int b=0;b<total;b++){
        cout<<empArr[b].idd<<"\t"<<empArr[b].nm<<"\t"<<empArr[b].desg<<"\t"<<empArr[b].sal<<"\n";
    }
}

void find_high(emp x[],int cnt){
    emp* maxx=&x[0];
    for(int c=1;c<cnt;c++){
        if(x[c].sal>maxx->sal){
            maxx=&x[c];
        }
    }
    cout<<"\nHighest Salary:\n";
    cout<<"Name: "<<maxx->nm<<"\n";
    cout<<"ID: "<<maxx->idd<<"\n";
    cout<<"Designation: "<<maxx->desg<<"\n";
    cout<<"Salary: "<<maxx->sal<<"\n";
}

int main(){
    const int noEmp=5;
    emp arr[noEmp];
    input(arr,noEmp);
    display(arr,noEmp);
    find_high(arr,noEmp);
}
