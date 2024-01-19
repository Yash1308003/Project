#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include<cstring>

using namespace std;

void displayMenu();
void addBook();
void displayBooks();
void searchBook();
void deleteBook();

class Library {
private:
    int bookId;
    char bookTitle[50];
    char author[50];
public:
    void setBookDetails(int id, const char* title, const char* auth) {
        bookId = id;
        strcpy(bookTitle, title);
        strcpy(author, auth);
    }

    void displayBookDetails() {
        cout << setw(5) << bookId << setw(20) << bookTitle << setw(20) << author << endl;
    }

    int getBookId() {
        return bookId;
    }

    const char* getBookTitle() {
        return bookTitle;
    }
};

Library books[100];
int bookCount = 0;

int main() {
    int choice;
    do {
        system("cls");
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                cout << "Exiting program. Goodbye!";
                break;
            default:
                cout << "Invalid choice. Please try again.";
                break;
        }

        cout << "\nPress any key to continue...";
        _getch();
    } while (choice != 5);

    return 0;
}

void displayMenu() {
    cout << "Library Management System\n";
    cout << "1. Add a book\n";
    cout << "2. Display all books\n";
    cout << "3. Search for a book\n";
    cout << "4. Delete a book\n";
    cout << "5. Exit\n";
}

void addBook() {
    int id;
    char title[50];
    char auth[50];

    cout << "Enter Book ID: ";
    cin >> id;

    cout << "Enter Book Title: ";
    cin.ignore();
    cin.getline(title, sizeof(title));

    cout << "Enter Author: ";
    cin.getline(auth, sizeof(auth));

    books[bookCount].setBookDetails(id, title, auth);
    bookCount++;

    cout << "Book added successfully!";
}

void displayBooks() {
    cout << setw(5) << "ID" << setw(20) << "Title" << setw(20) << "Author" << endl;
    cout << "-------------------------------------------\n";

    for (int i = 0; i < bookCount; i++) {
        books[i].displayBookDetails();
    }
}

void searchBook() {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].getBookId() == id) {
            cout << "Book found!\n";
            books[i].displayBookDetails();
            return;
        }
    }

    cout << "Book not found!";
}

void deleteBook() {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;

    for (int i = 0; i < bookCount; i++) {
        if (books[i].getBookId() == id) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            cout << "Book deleted successfully!";
            return;
        }
    }

    cout << "Book not found!";
}
