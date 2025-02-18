#include<iostream>
#include <fstream>
using namespace std;
struct cases{
    int caseId;
    string clientName;
    string casedescription;
    string status;
};
cases Case[100];
int caseCount=0;
void addCase(){
    if (caseCount<100)
    {
        bool uniqueId = true;
        cout<<"Enter case ID"<<endl;
        cin>>Case[caseCount].caseId;
        for (int i = 0; i < caseCount; i++)
        {
            if (Case[caseCount].caseId== Case[i].caseId)
            {
                cout<<"Case ID already exists"<<endl;
                uniqueId=false;
                break;
            }
        }
        if (uniqueId)
        {
            cout<<"Enter client name"<<endl;
            cin>>Case[caseCount].clientName;
            cout<<"Enter case description"<<endl;
            cin.ignore();
            getline(cin,Case[caseCount].casedescription);
            cout<<"Enter status"<<endl;
            cin>>Case[caseCount].status;
            caseCount++;
        }
    }
    
}
void saveCase(){
    ofstream outFile("cases.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < caseCount; i++) {
            outFile <<"Case Id : "<< Case[i].caseId << endl;
            outFile << "Client Name: " << Case[i].clientName << endl;
            outFile << "Case Description: " <<Case[i].casedescription << endl;
            outFile << "Case Status: " <<Case[i].status << endl;
            outFile << "\n";
        }
        outFile.close();
    } else {
        cout << "Error opening file." << endl;
    }
}
//Why is it displaying two times?
void viewCases(){
    ifstream inFile("cases.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            for (int i = 0; i < caseCount; i++)
            {
              cout << line << endl;
            }
        }
        inFile.close();
    } else {
        cout << "Error opening file.\n";
    }
}
void searchCase(){
    int caseId;
    cout<<"Enter case ID to find case"<<endl;
    cin>>caseId;   
    for (int  i = 0; i < caseCount; i++)
    {
        if ( Case[i].caseId == caseId )
        {
            cout<<"Case ID"<<Case[i].caseId<<endl;
            cout<<"client name"<<Case[i].clientName<<endl;
            cout<<"Case description"<<Case[i].casedescription<<endl;
            cout<<"Case status"<<Case[i].status<<endl;
        }
        
    }
    

}

int main()
{
    int option;
    do {
        cout << "Menu:" << endl;
        cout << "1. Add a new case" << endl;
        cout << "2. View all cases" << endl;
        cout << "3. Search for a case by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                addCase();
                saveCase();
                break;
            case 2:
                viewCases();
                break;
            case 3:
                searchCase();
                break;
            case 4:
                cout << "Allah hafiz" << endl;
                break;
            default:
                cout << "Invalid option" << endl;
        }
    } while (option != 4);

    return 0;
}
