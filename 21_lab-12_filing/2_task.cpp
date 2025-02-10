#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct ContactInfo {
    string name;
    long int phone;
    string email;
};

ContactInfo contacts[100];
int contactCount = 0;

void addContact() {
    if (contactCount < 100) {
        cout << "Enter name: ";
        cin >> contacts[contactCount].name;
        cout << "Enter phone: ";
        cin >> contacts[contactCount].phone;
        cout << "Enter email: ";
        cin >> contacts[contactCount].email;
        contactCount++;
        cout << "Contact added successfully!" << endl;
    } else {
        cout << "Address book is full!" << endl;
    }
}

void displayContacts() {
    if (contactCount == 0) {
        cout << "No contacts to display." << endl;
    } else {
        for (int i = 0; i < contactCount; i++) {
            cout << "Name: " << contacts[i].name << endl;
            cout << "Phone: " << contacts[i].phone << endl;
            cout << "Email: " << contacts[i].email << endl;
        }
    }
}

void searchContact() {
    string searchName;
    cout << "Enter name to search: ";
    cin >> searchName;
    bool found = false;

    for (int i = 0; i < contactCount; i++) {
        if (contacts[i].name == searchName) {
            cout << "Name: " << contacts[i].name << endl;
            cout << "Phone: " << contacts[i].phone << endl;
            cout << "Email: " << contacts[i].email << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void saveContactsToFile() {
    ofstream outFile("contacts.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < contactCount; i++) {
            outFile << contacts[i].name << endl;
            outFile << contacts[i].phone << endl;
            outFile << contacts[i].email << endl;
        }
        outFile.close();
        cout << "Contacts saved to file." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
}

int main() {
    int option;
    do {
        cout << "Menu:" << endl;
        cout << "0. Quit" << endl;
        cout << "1. Add new contact" << endl;
        cout << "2. Display all contacts" << endl;
        cout << "3. Search for a contact by name" << endl;
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                addContact();
                saveContactsToFile();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 0:
                cout << "Allah hafiz" << endl;
                break;
            default:
                cout << "Invalid option" << endl;
        }
    } while (option != 0);

    return 0;
}
