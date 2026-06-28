#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isAvailable;
};
void displayBook(Book b) {
    cout << "ID     : " << b.id << endl;
    cout << "Title  : " << b.title << endl;
    cout << "Author : " << b.author << endl;
    cout << "Status : " << (b.isAvailable ? "Available" : "Issued") << endl;
    cout << "-----------------------------" << endl;
}
int main() {
    const int MAX = 5;
    Book books[MAX];
    int count = 0; 
    int choice;

    cout << "=== Library Management System ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Book Add karo" << endl;
        cout << "2. show all books " << endl;
        cout << "3. Issue book" << endl;
        cout << "4. Return book" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1:
                if (count >= MAX) {
                    cout << "Library full !" << endl;
                } else {
                    books[count].id = count + 1;
                    cout << "Book Title: "; cin >> books[count].title;
                    cout << "Author: "; cin >> books[count].author;
                    books[count].isAvailable = true;
                    count++;
                    cout << "Book add ho gayi!" << endl;
                }
                break;

            case 2:
                if (count == 0) { cout << "no book!" << endl; break; }
                for (int i = 0; i < count; i++) displayBook(books[i]);
                break;

            case 3: {
                int id;
                cout << " book (ID) ? : "; cin >> id;
                if (id < 1 || id > count) { cout << "WRONG ID!" << endl; break; }
                if (!books[id-1].isAvailable) cout << "already issued !" << endl;
                else { books[id-1].isAvailable = false; cout << "Book issued !" << endl; }
                break;
            }

            case 4: {
                int id;
                cout << " book (ID) ? : "; cin >> id;
                if (id < 1 || id > count) { cout << "WRONG ID!" << endl; break; }
                if (books[id-1].isAvailable) cout << "Book available !" << endl;
                else { books[id-1].isAvailable = true; cout << "Book returned !" << endl; }
                break;
            }

            case 5:
                cout << "Library System closed." << endl;
                break;

            default:
                cout << "r u retard ?" << endl;
        }
    } while (choice != 5);
}