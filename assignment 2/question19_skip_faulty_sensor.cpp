#include <iostream>

using namespace std;

int main() {
    double reading;
    double totalValue = 0.0;
    int validCount = 0;

    cout << "--- Sensor Processing Array System Loop ---" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter telemetric reading from sensor #" << i << ": ";
        cin >> reading;

        if (reading == 999.0) {
            cout << ">>  Faulty sensor value skipped." << endl;
            continue; 
        }

        totalValue += reading;
        validCount++;
    }

    cout << "\n===== TELEMETRY PROCESSING RESULTS =====" << endl;
    if (validCount == 0) {
        cout << "Error: No valid metrics parsed from array." << endl;
    } else {
        cout << "Average of Valid Sensors = " << (totalValue / validCount) << endl;
    }

    return 0;
}