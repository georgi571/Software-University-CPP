#include <iostream>
using namespace std;

int main() {

    const double WRAPPING_PAPER_PER_ROLL = 5.80;
    const double CLOTH_PER_ROLL = 7.20;
    const double GLUE_PER_LITER = 1.20;

    int numberOfRollsWrappingPaper;
    cin >> numberOfRollsWrappingPaper;

    int numberOfRollsCloth;
    cin >> numberOfRollsCloth;

    double literOfGlue;
    cin >> literOfGlue;

    int percentDiscount;
    cin >> percentDiscount;

    double priceForWrappingPaper = numberOfRollsWrappingPaper * WRAPPING_PAPER_PER_ROLL;
    double priceForCloth = numberOfRollsCloth * CLOTH_PER_ROLL;
    double priceForGlue = literOfGlue * GLUE_PER_LITER;

    double totalPrice = priceForWrappingPaper + priceForCloth + priceForGlue;

    double percent = percentDiscount / 100.00;
    double discount = totalPrice * percent;

    double priceAfterDiscount = totalPrice - discount;

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << priceAfterDiscount << endl;

    return 0;
}
