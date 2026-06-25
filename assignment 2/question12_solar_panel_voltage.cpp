#include <iostream>

using namespace std;

int main() {
    double voltage = 18.0; 

    cout << "--- Solar Panel Voltage Monitor Loop ---" << endl;

    while (voltage >= 18.0) {
        cout << "Enter solar panel operational voltage (V): ";
        cin >> voltage;

        if (voltage < 18.0) {
            cout << ": Solar panel voltage below operating level." << endl;
        }
    }

    return 0;
}