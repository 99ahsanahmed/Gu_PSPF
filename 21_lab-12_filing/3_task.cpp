#include <iostream>
#include <fstream>
using namespace std;

struct Book {
    string title;
    string author;
    string ISBN;
    bool available;
};

Book books[100];
int bookIndex = 0;

void addBooks() {
    if (bookIndex < 100) {
        cout << "Book title: ";
        cin >> books[bookIndex].title;
        cout << "Book author: ";
        cin >> books[bookIndex].author;
        cout << "Book ISBN: ";
        cin >> books[bookIndex].ISBN;
        books[bookIndex].available = true;
        bookIndex++;
        cout << "Book added successfully!" << endl;
    } else {
        cout << "Library is full. Cannot add more books." << endl;
    }
}

void checkoutBooks() {
    string bookName;
    cout << "Enter book name you want to checkout: ";
    cin >> bookName;

    for (int i = 0; i < bookIndex; i++) {
        if (bookName == books[i].title) {
            if (books[i].available) {
                books[i].available = false;
                cout << "Book checked out successfully!" << endl;
            } else {
                cout << "Book is already checked out." << endl;
            }
            return;
        }
    }
    cout << "Book not found." << endl;
}

void returnBook() {
    string bookName;
    cout << "Enter book name you want to return: ";
    cin >> bookName;

    for (int i = 0; i < bookIndex; i++) {
        if (bookName == books[i].title) {
            if (!books[i].available) {
                books[i].available = true;
                cout << "Book returned successfully!" << endl;
            } else {
                cout << "Book is already available in the library." << endl;
            }
            return;
        }
    }
    cout << "Book not found." << endl;
}

void displayBooks() {
    if (bookIndex == 0) {
        cout << "No books in the library." << endl;
    } else {
        for (int i = 0; i < bookIndex; i++) {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "ISBN: " << books[i].ISBN << endl;
            cout << "Available: " << (books[i].available ? "Yes" : "No") << endl;
            cout << "-----------------------" << endl;
        }
    }
}

void saveLibraryToFile() {
    ofstream outFile("library.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < bookIndex; i++) {
            outFile << books[i].title << endl;
            outFile << books[i].author << endl;
            outFile << books[i].ISBN << endl;
            outFile << books[i].available << endl;
        }
        outFile.close();
        cout << "Library database saved to file." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
}

int main() {
    int option;

    do {
        cout << "Menu: " << endl;
        cout << "1. Add new book" << endl;
        cout << "2. Checkout book" << endl;
        cout << "3. Return book" << endl;
        cout << "4. Display all books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your option: " << endl;
        cin >> option;

        switch (option) {
            case 1:
                addBooks();
                saveLibraryToFile();
                break;
            case 2:
                checkoutBooks();
                saveLibraryToFile();
                break;
            case 3:
                returnBook();
                saveLibraryToFile();
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (option != 5);

    return 0;
}
