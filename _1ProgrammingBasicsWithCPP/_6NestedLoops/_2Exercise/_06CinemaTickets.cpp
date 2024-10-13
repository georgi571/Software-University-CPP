#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    string command;
    getline(cin, command);

    int studentsTicket = 0;
    int standardTicket = 0;
    int kidTicket = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (command != "Finish") {
        string movieName = command;
        int numberOfSeats;
        cin >> numberOfSeats;

        int soldTicketsForThisMovie = 0;

        while (soldTicketsForThisMovie < numberOfSeats) {
            string ticketsType;
            cin >> ticketsType;

            if (ticketsType == "End") {
                break;
            }

            soldTicketsForThisMovie++;

            if (ticketsType == "student") {
                studentsTicket++;
            } else if (ticketsType == "standard") {
                standardTicket++;
            } else if (ticketsType == "kid") {
                kidTicket++;
            }
        }

        double percentSoldTickets = static_cast<double>(soldTicketsForThisMovie) / numberOfSeats * 100;

        cout << movieName << " - " << percentSoldTickets << "% full." << endl;

        cin.ignore();
        getline(cin, command);
    }

    int totalTickets = studentsTicket + standardTicket + kidTicket;
    cout << "Total tickets: " << totalTickets << endl;

    double percentStudentTickets = static_cast<double>(studentsTicket) / totalTickets * 100;
    double percentStandardTickets = static_cast<double>(standardTicket) / totalTickets * 100;
    double percentKidTickets = static_cast<double>(kidTicket) / totalTickets * 100;

    cout << percentStudentTickets << "% student tickets." << endl;
    cout << percentStandardTickets << "% standard tickets." << endl;
    cout << percentKidTickets << "% kids tickets." << endl;

    return 0;
}
