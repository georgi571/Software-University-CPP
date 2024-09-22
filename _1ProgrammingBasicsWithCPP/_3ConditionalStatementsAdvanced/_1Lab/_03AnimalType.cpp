#include <iostream>
using namespace std;

int main() {
    string animalType;
    cin >> animalType;

    string animalClass;

    if (animalType == "dog") {
        animalClass = "mammal";
    } else if (animalType == "crocodile") {
        animalClass = "reptile";
    } else if (animalType == "tortoise") {
        animalClass = "reptile";
    } else if (animalType == "snake") {
        animalClass = "reptile";
    } else {
        animalClass = "unknown";
    }

    cout << animalClass << endl;

    return 0;
}
