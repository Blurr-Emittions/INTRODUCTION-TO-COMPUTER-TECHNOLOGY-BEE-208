#include <iostream>

using namespace std;

int main() {
    int choice;
    double value;

    cout << "===== MEASUREMENT UNIT CONVERSION =====" << endl;
    cout << "1. Convert Volts (V) to Millivolts (mV)" << endl;
    cout << "2. Convert Amperes (A) to Milliamperes (mA)" << endl;
    cout << "3. Convert Kilowatts (kW) to Watts (W)" << endl;
    cout << "4. Convert Ohms (Ω) to Kilo-ohms (kΩ)" << endl;
    cout << "=======================================" << endl;
    cout << "Select conversion option (1-4): ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch (choice) {
        case 1:
            cout << value << " V = " << (value * 1000.0) << " mV" << endl;
            break;
        case 2:
            cout << value << " A = " << (value * 1000.0) << " mA" << endl;
            break;
        case 3:
            cout << value << " kW = " << (value * 1000.0) << " W" << endl;
            break;
        case 4:
            cout << value << " Ω = " << (value / 1000.0) << " kΩ" << endl;
            break;
        default:
            cout << "Error: Invalid operation choice." << endl;
            break;
    }

    return 0;
}