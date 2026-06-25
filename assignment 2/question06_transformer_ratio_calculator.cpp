#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "===== TRANSFORMER RATIO CALCULATOR =====" << endl;
    cout << "1. Calculate turns ratio" << endl;
    cout << "2. Calculate secondary voltage" << endl;
    cout << "3. Calculate primary voltage" << endl;
    cout << "========================================" << endl;
    cout << "Select calculation type (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double primaryTurns, secondaryTurns;
            cout << "Enter Primary Turns (Np): ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns (Ns): ";
            cin >> secondaryTurns;
            
            if (secondaryTurns == 0) {
                cout << "Error: Secondary turns cannot be zero." << endl;
            } else {
                cout << "Calculated Turns Ratio = " << (primaryTurns / secondaryTurns) << endl;
            }
            break;
        } 
        case 2: {
            double primaryVoltage, primaryTurns, secondaryTurns;
            cout << "Enter Primary Voltage (Vp) in Volts: ";
            cin >> primaryVoltage;
            cout << "Enter Primary Turns (Np): ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns (Ns): ";
            cin >> secondaryTurns;

            if (primaryTurns == 0) {
                cout << "Error: Primary turns cannot be zero." << endl;
            } else {
                double vs = (primaryVoltage * secondaryTurns) / primaryTurns;
                cout << "Calculated Secondary Voltage = " << vs << " V" << endl;
            }
            break;
        } 
        case 3: {
            double secondaryVoltage, primaryTurns, secondaryTurns;
            cout << "Enter Secondary Voltage (Vs) in Volts: ";
            cin >> secondaryVoltage;
            cout << "Enter Primary Turns (Np): ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns (Ns): ";
            cin >> secondaryTurns;

            if (secondaryTurns == 0) {
                cout << "Error: Secondary turns cannot be zero." << endl;
            } else {
                double vp = (secondaryVoltage * primaryTurns) / secondaryTurns;
                cout << "Calculated Primary Voltage = " << vp << " V" << endl;
            }
            break;
        } 
        default:
            cout << "Error: Invalid choice menu assignment." << endl;
            break;
    }

    return 0;
}
