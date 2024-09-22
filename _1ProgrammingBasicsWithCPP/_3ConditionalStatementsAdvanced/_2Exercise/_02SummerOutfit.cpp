#include <iostream>
using namespace std;

int main() {
    int degree;
    cin >> degree;

    string timeOfTheDay;
    cin >> timeOfTheDay;

    string outfit;
    string shoes;
    if (timeOfTheDay == "Morning") {
        if (degree >= 10 && degree <= 18) {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        } else if (degree > 18 && degree <= 24) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degree >= 25) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    } else if (timeOfTheDay == "Afternoon") {
        if (degree >= 10 && degree <= 18) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degree > 18 && degree <= 24) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        } else if (degree >= 25) {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
    } else if (timeOfTheDay == "Evening") {
        if (degree >= 10 && degree <= 18) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degree > 18 && degree <= 24) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degree >= 25) {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    cout << "It's " << degree << " degrees, get your " << outfit << " and " << shoes << "." << endl;

    return 0;
}