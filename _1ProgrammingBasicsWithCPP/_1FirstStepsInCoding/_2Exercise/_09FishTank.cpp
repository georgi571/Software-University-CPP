#include <iostream>
using namespace std;

int main() {
    int lengthInCm;
    cin >> lengthInCm;

    int widthInCm;
    cin >> widthInCm;

    int heightInCm;
    cin >> heightInCm;

    double percent;
    cin >> percent;

    double volumeForAquarium = lengthInCm * widthInCm * heightInCm;
    double volumeInLiters = volumeForAquarium * 0.001;
    double occupiedSpace = volumeInLiters * (percent / 100.0);
    double neededLiters = volumeInLiters - occupiedSpace;

    cout << neededLiters << endl;
    return 0;
}
