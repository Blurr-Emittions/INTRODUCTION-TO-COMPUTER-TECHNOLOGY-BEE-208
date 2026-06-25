#include <iostream>

using namespace std;

int main() {
    double wattage, totalPower = 0.0;

    cout << "--- Total Power of 12 Lighting Points ---" << endl;
    for (int i = 1; i <= 12; i++) {
        cout << "Enter wattage for lighting point #" << i << " in Watts (W): ";
        cin >> wattage;
        totalPower += wattage;
    }

    cout << "\nFinal Result: Total lighting load = " << totalPower << " W" << endl;
    return 0;
}