#include <iostream>

using namespace std;

int main() {
    double resistance = 0.0;

    cout << "--- Earthing Loop Resistance Tracker ---" << endl;

    while (resistance <= 5.0) {
        cout << "Enter measured earth ground resistance (Ω): ";
        cin >> resistance;

        if (resistance > 5.0) {
            cout << "Alert: Earth resistance too high. Improve earthing system." << endl;
        }
    }

    return 0;
}