#include <iostream>

using namespace std;

int main() {
    double voltage, current, resistance;
    char userChoice;

    cout << "--- Ohm's Law Calculator Menu Loop ---" << endl;

    do {
        cout << "\nEnter Voltage in Volts (V): ";
        cin >> voltage;
        cout << "Enter Current in Amperes (A): ";
        cin >> current;

        if (current == 0) {
            cout << "Error: Division by zero current cannot be processed." << endl;
        }
        else {
            resistance = voltage / current;
            cout << "Calculated Resistance = " << resistance << " Ω" << endl;
        }

        cout << "Do you want to continue running tests? (Y/N): ";
        cin >> userChoice;

    } while (userChoice != 'N' && userChoice != 'n');

    cout << "Exiting calculator sequence." << endl;
    return 0;
}