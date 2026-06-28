#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    int ticketId;
    string passengerName;
    string from, to;
    string seatType;                                                       // General / Sleeper / AC
    double price;
};
int main() {
    const int MAX = 10;
    Ticket tickets[MAX];
    int count = 0;
    int choice;
    int totalSeats = 10;                                                        // only 10 seats available

    cout << "=== Ticket Booking System ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Ticket Book " << endl;
        cout << "2. Ticket Cancel " << endl;
        cout << "3. Show Booking " << endl;
        cout << "4. Available Seats " << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1: {
                if (count >= totalSeats) { 
                cout << "Koi seat available nahi!" << endl; break;
             }
                Ticket t;
                t.ticketId = 100 + count + 1;
                cout << "Passenger Name: "; cin >> t.passengerName;
                cout << "From: "; cin >> t.from;
                cout << "To: "; cin >> t.to;
                cout << "Seat Type (1-General, 2-Sleeper, 3-AC): ";
                int seatChoice; cin >> seatChoice;

                if (seatChoice == 1)      { t.seatType = "General";  t.price = 200; }
                else if (seatChoice == 2) { t.seatType = "Sleeper";  t.price = 500; }
                else                      { t.seatType = "AC";       t.price = 1000; }

                tickets[count++] = t;
                cout << "Ticket booked! Ticket ID: " << t.ticketId << " | Price: Rs. " << t.price << endl;
                break;
            }
            case 2: {
                int id;
                cout << "Ticket ID ? : "; cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (tickets[i].ticketId == id) {
                        
                        tickets[i] = tickets[count - 1];
                        count--;
                        cout << "Ticket canceled!" << endl;
                        found = true; break;
                    }
                }
                if (!found) cout << "Ticket not found!" << endl;
                break;
            }

            case 3:
                if (count == 0) { cout << "No booking !" << endl; break; }
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << tickets[i].ticketId
                         << " | " << tickets[i].passengerName
                         << " | " << tickets[i].from << " -> " << tickets[i].to
                         << " | " << tickets[i].seatType
                         << " | Rs. " << tickets[i].price << endl;
                }
                break;

            case 4:
                cout << "Available Seats: " << (totalSeats - count) << "/" << totalSeats << endl;
                break;

            case 5:
                cout << "Ticket System closed." << endl;
                break;

            default:
                cout << "Wrong choice!" << endl;
        }
    } while (choice != 5);
}