#include <iostream>

using namespace std;

int main() {
    double temperature = 0.0;

    cout << "--- Continuous Motor Temperature Monitor ---" << endl;
    
    while (temperature <= 90.0) {
        cout << "Enter current motor temperature (°C): ";
        cin >> temperature;
        
        if (temperature > 90.0) {
            cout << "Motor temperature unsafe. Stop motor test." << endl;
        } else {
            cout << "Safe operating condition." << endl;
        }
    }

    return 0;
}