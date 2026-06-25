#include <iostream>

using namespace std;

int main() {
    double voltage, current, power;
    char userChoice;

    cout << "--- Continuous DC Power Calculator Loop ---" << endl;

    do {
        cout << "\nEnter Voltage values in Volts (V): ";
        cin >> voltage;
        cout << "Enter Current values in Amperes (A): ";
        cin >> current;

        power = voltage * current;
        cout << "Calculated DC Power output = " << power << " W" << endl;

        cout << "Perform another calculation? (Y/N): ";
        cin >> userChoice;

    } while (userChoice == 'Y' || userChoice == 'y');

    cout << "System logging ended safely." << endl;
    return 0;
}