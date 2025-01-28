#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

bool canFinish(queue<int> quant, queue<int> dist);

int main() {
    int numberOfPumps;
    cin >> numberOfPumps;

    queue<int> quant;
    queue<int> dist;

    for (int i = 0; i < numberOfPumps; i++) {
        int quantity, distance;
        cin >> quantity >> distance;
        quant.push(quantity); dist.push(distance);
    }

    for (int i = 0; i < numberOfPumps; i++) {
        if (canFinish(quant, dist)) {
            cout << i << endl;
            break;
        }

        int q = quant.front(); quant.pop();
        int d = dist.front(); dist.pop();
        quant.push(q); dist.push(d);
    }

    return 0;
}

bool canFinish(queue<int> quant, queue<int> dist) {
    int tankFuel = 0;

    while (!quant.empty() || !dist.empty()) {
        int fuel = quant.front(); quant.pop();
        int distance = dist.front(); dist.pop();

        tankFuel += fuel;
        tankFuel -= distance;

        if (tankFuel < 0) {
            return false;
        }
    }

    return true;
}