#include <iostream>

using namespace std;

int main() {
    double powerReading;
    double totalValidPower = 0.0;

    cout << "--- Net Energy Monitoring System Log ---" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter power system data point #" << i << " in Watts (W): ";
        cin >> powerReading;

        if (powerReading < 0.0) {
            cout << ">> Invalid reading skipped." << endl;
            continue; 
        }

        totalValidPower += powerReading;
    }

    cout << "\n===== ACQUISITION REPORT =====" << endl;
    cout << "Total Valid Absorbed Power = " << totalValidPower << " W" << endl;

    return 0;
}