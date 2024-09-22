#include <iostream>
using namespace std;

int main() {
    const double VIP_TICKET_PRICE = 499.99;
    const double NORMAL_TICKET_PRICE = 249.99;

    const double PERCENT_FOR_TRANSPORT_IF_PEOPLE_FROM_1_TO_4 = 0.75;
    const double PERCENT_FOR_TRANSPORT_IF_PEOPLE_FROM_5_TO_9 = 0.60;
    const double PERCENT_FOR_TRANSPORT_IF_PEOPLE_FROM_10_TO_24 = 0.50;
    const double PERCENT_FOR_TRANSPORT_IF_PEOPLE_FROM_25_TO_49 = 0.40;
    const double PERCENT_FOR_TRANSPORT_IF_PEOPLE_MORE_THAN_50 = 0.25;

    double budget;
    cin >> budget;

    string category;
    cin >> category;

    int numberOfPeople;
    cin >> numberOfPeople;

    double moneyLeftForTickets = 0.00;

    if (numberOfPeople <= 4) {
        moneyLeftForTickets = budget - (budget * PERCENT_FOR_TRANSPORT_IF_PEOPLE_FROM_1_TO_4);
    } else if (numberOfPeople <= 9) {
        moneyLeftForTickets = budget - (budget * PERCENT_FOR_TRANSPORT_IF_PEOPLE_FROM_5_TO_9);
    } else if (numberOfPeople <= 24) {
        moneyLeftForTickets = budget - (budget * PERCENT_FOR_TRANSPORT_IF_PEOPLE_FROM_10_TO_24);
    } else if (numberOfPeople <= 49) {
        moneyLeftForTickets = budget - (budget * PERCENT_FOR_TRANSPORT_IF_PEOPLE_FROM_25_TO_49);
    } else if (numberOfPeople > 50) {
        moneyLeftForTickets = budget - (budget * PERCENT_FOR_TRANSPORT_IF_PEOPLE_MORE_THAN_50);
    }

    double totalTicketPrice = 0.00;
    if (category == "VIP") {
        totalTicketPrice = numberOfPeople * VIP_TICKET_PRICE;
    } else if (category == "Normal") {
        totalTicketPrice = numberOfPeople * NORMAL_TICKET_PRICE;
    }

    double diff = abs(moneyLeftForTickets - totalTicketPrice);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (moneyLeftForTickets >= totalTicketPrice) {
        cout << "Yes! You have " << diff << " leva left." << endl;
    } else {
        cout << "Not enough money! You need " << diff << " leva." << endl;
    }

    return 0;
}