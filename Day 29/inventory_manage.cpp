#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    double price;
};

void displayProduct(Product p) {
    cout << "ID       : " << p.id << endl;
    cout << "Product  : " << p.name << endl;
    cout << "Quantity : " << p.quantity << endl;
    cout << "Price    : Rs. " << p.price << endl;
    cout << "-----------------------------" << endl;
}
int main() {
    const int MAX = 10;
    Product products[MAX];
    int count = 0;
    int choice;

    cout << "=== Inventory Management System ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Product Add " << endl;
        cout << "2. show all products " << endl;
        cout << "3. Product Search " << endl;
        cout << "4. Stock Update " << endl;
        cout << "5. Product Delete " << endl;
        cout << "6. Low Stock Alert (<5)" << endl;
        cout << "7. Total Inventory Value" << endl;
        cout << "8. Exit" << endl;
        cout << "Choice: "; 
        cin >> choice;

        switch (choice) {
            case 1:
                if (count >= MAX) {
                 cout << "Inventory full hai!" << endl; break;
                }
                products[count].id = 101 + count;
                cout << "Product Naam: "; cin >> products[count].name;
                cout << "Quantity: "; cin >> products[count].quantity;
                cout << "Price: Rs. "; cin >> products[count].price;
                cout << "Product ID " << products[count].id << " added !" << endl;
                count++;
                break;

            case 2:
                if (count == 0) { 
                cout << "Koi product nahi!" << endl; break;
            }
                for (int i = 0; i < count; i++) {
                displayProduct(products[i]);}
                break;

            case 3: {
                int id;
                cout << "Product ID: "; cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (products[i].id == id) {
                        displayProduct(products[i]);
                        found = true; break;
                    }
                }
                if (!found) cout << "Product not found !" << endl;
                break;
            }

            case 4: {
                int id, newQty;
                cout << "Product ID: "; 
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (products[i].id == id) {
                        cout << "Naya Quantity: "; 
                        cin >> newQty;
                        products[i].quantity = newQty;
                        cout << "Stock update ho gaya!" << endl;
                        found = true; break;
                    }
                }
                if (!found) cout << "Product nahi mila!" << endl;
                break;
            }

            case 5: {
                int id;
                cout << "which ID to be deleted ?  "; 
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (products[i].id == id) {
                        products[i] = products[count - 1];
                        count--;
                        cout << "Product delete ho gaya!" << endl;
                        found = true; break;
                    }
                }
                if (!found) cout << "Product nahi mila!" << endl;
                break;
            }

            case 6:
                cout << "--- Low Stock Products (qty < 5) ---" << endl;
                for (int i = 0; i < count; i++)
                    if (products[i].quantity < 5)
                        cout << "!@@! " << products[i].name << " - Qty: " << products[i].quantity << endl;
                break;

            case 7: {
                double total = 0;
                for (int i = 0; i < count; i++)
                    total += products[i].price * products[i].quantity;
                cout << "Total Inventory Value: Rs. " << total << endl;
                break;
            }

            case 8:
                cout << "Inventory System closed " << endl;
                break;

            default:
                cout << "wrong choice!" << endl;
        }
    } while (choice != 8);
}