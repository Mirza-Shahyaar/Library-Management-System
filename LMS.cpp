#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    bool isIssued;

public:
    Book(int id, string title, string author) 
        : id(id), title(title), author(author), isIssued(false) {}

    int getId() const { return id; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    bool getIsIssued() const { return isIssued; }

    void issueBook() { isIssued = true; }
    void returnBook() { isIssued = false; }

    void displayInfo() const {
        cout << "ID: " << id << ", Title: " << title 
             << ", Author: " << author 
             << ", Issued: " << (isIssued ? "Yes" : "No") << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully!\n";
    }

    void issueBook(int id) {
        for (auto &book : books) {
            if (book.getId() == id) {
                if (!book.getIsIssued()) {
                    book.issueBook();
                    cout << "Book issued successfully!\n";
                } else {
                    cout << "Book is already issued.\n";
                }
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook(int id) {
        for (auto &book : books) {
            if (book.getId() == id) {
                if (book.getIsIssued()) {
                    book.returnBook();
                    cout << "Book returned successfully!\n";
                } else {
                    cout << "Book was not issued.\n";
                }
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void displayAllBooks() const {
        if (books.empty()) {
            cout << "No books in the library.\n";
            return;
        }
        for (const auto &book : books) {
            book.displayInfo();
        }
    }
};

int main() {
    Library library;
    int choice;
    
    while (true) {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Display All Books\n";
        cout << "5. Quit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title, author;
            cout << "Enter book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            library.addBook(Book(id, title, author));
        } else if (choice == 2) {
            int id;
            cout << "Enter book ID to issue: ";
            cin >> id;
            library.issueBook(id);
        } else if (choice == 3) {
            int id;
            cout << "Enter book ID to return: ";
            cin >> id;
            library.returnBook(id);
        } else if (choice == 4) {
            library.displayAllBooks();
        } else if (choice == 5) {
            cout << "Exiting the system. Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    }

    return 0;
}
