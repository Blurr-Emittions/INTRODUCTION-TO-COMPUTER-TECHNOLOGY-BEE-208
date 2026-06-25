#include <iostream>

using namespace std;

int main() {
    double reading;

    cout << "---  Insulation Tester Loop (Max 10 readings) ---" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter Insulation Resistance reading #" << i << " in Megaohms (MΩ): ";
        cin >> reading;

        if (reading < 1.0) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break; 
        } else {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}