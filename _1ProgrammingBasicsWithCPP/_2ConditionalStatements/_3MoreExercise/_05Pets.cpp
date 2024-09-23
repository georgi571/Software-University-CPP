#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int days;
    cin >> days;

    int totalKgOfFood;
    cin >> totalKgOfFood;

    double kgOfFoodDogEatPerDay;
    cin >> kgOfFoodDogEatPerDay;

    double kgOfFoodCatEatPerDay;
    cin >> kgOfFoodCatEatPerDay;

    double gramsOfFoodTurtleEatPerDay;
    cin >> gramsOfFoodTurtleEatPerDay;

    double foodInGrams = totalKgOfFood * 1000;
    double foodInGramsForDog = kgOfFoodDogEatPerDay * 1000;
    double foodInGramsForCat = kgOfFoodCatEatPerDay * 1000;


    double gramsOfFoodNeededForDog = days * foodInGramsForDog;
    double gramsOfFoodNeededForCat = days * foodInGramsForCat;
    double gramsOfFoodNeededForTurtle = days * gramsOfFoodTurtleEatPerDay;

    double totalFoodNeededInGrams = gramsOfFoodNeededForDog + gramsOfFoodNeededForCat + gramsOfFoodNeededForTurtle;

    double leftFood = floor((foodInGrams - totalFoodNeededInGrams) / 1000);
    double neededFood = ceil((totalFoodNeededInGrams - foodInGrams) / 1000);

    if (foodInGrams >= totalFoodNeededInGrams) {
        cout << leftFood << " kilos of food left." << endl;
    } else {
        cout << neededFood << " more kilos of food are needed." << endl;
    }

    return 0;
}