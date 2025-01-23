#include<iostream>
#include <fstream>
using namespace std;
struct student{
    string name;
    int id;
    float maths;
    float urdu;
    float english;
};
student students[3];

void studentInformaion(){
    cout<<"Enter student details: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"For student "<<i+1<<endl;
        cout<<"Name: ";
        cin>>students[i].name;
        cout<<"ID: ";
        cin>>students[i].id;
        cout<<"Maths: ";
        cin>>students[i].maths;
        cout<<"Urdu: ";
        cin>>students[i].urdu;
        cout<<"English: ";
        cin>>students[i].english;
    }
    
}
int main()
{

    studentInformaion();
    ofstream outFile("students.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < 3; i++) {
            outFile << "Student " << i + 1 << ":" << endl;
            outFile << "Name: " << students[i].name << endl;
            outFile << "ID: " << students[i].id << endl;
            outFile << "Maths grade: " << students[i].maths << endl;
            outFile << "Urdu grade: " << students[i].urdu << endl;
            outFile << "English grade: " << students[i].english << endl;
            outFile << "----------------------" << endl;
        }
        outFile.close();
        cout << "Data written to file.\n";
    } else {
        cout << "Error opening file.\n";
    }

    ifstream inFile("students.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file.\n";
    }


    return 0;
}