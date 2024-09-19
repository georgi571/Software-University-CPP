#include <iostream>
using namespace std;

int main() {
    const double PERCENT_DISCOUNT_IF_VIDEOCARS_IS_MORE_THAN_PROCESSORS = 0.15;

    const double VIDEOCARD_PRICE = 250;
    const double PROCESSOR_PRICE_PERCENT = 0.35;
    const double RAM_MEMORY_PRICE_PERCENT = 0.10;

    double budged;
    cin >> budged;

    int numberOfVideoCards;
    cin >> numberOfVideoCards;

    int numberOfProcessors;
    cin >> numberOfProcessors;

    int numberOfRamMemory;
    cin >> numberOfRamMemory;

    double sumForVideoCards = numberOfVideoCards * VIDEOCARD_PRICE;
    double priceForProcessor = sumForVideoCards * PROCESSOR_PRICE_PERCENT;
    double sumForProcessors = numberOfProcessors * priceForProcessor;
    double priceForRamMemory = sumForVideoCards * RAM_MEMORY_PRICE_PERCENT;
    double sumForRamMemory = numberOfRamMemory * priceForRamMemory;
    double totalSum = sumForRamMemory + sumForProcessors + sumForVideoCards;

    if (numberOfVideoCards > numberOfProcessors) {
        totalSum = totalSum - (totalSum * PERCENT_DISCOUNT_IF_VIDEOCARS_IS_MORE_THAN_PROCESSORS);
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    double diff = abs(totalSum - budged);
    if (budged >= totalSum) {
        cout << "You have " << diff << " leva left!" << endl;
    } else {
        cout << "Not enough money! You need " << diff << " leva more!" << endl;
    }
    
    return 0;
}