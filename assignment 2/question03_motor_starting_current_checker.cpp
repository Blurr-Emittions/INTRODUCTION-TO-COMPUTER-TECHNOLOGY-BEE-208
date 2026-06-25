#include <iostream>

using namespace std;

int main() {
    double ratedCurrent, startingCurrent;

    cout << "Enter the motor rated current in Amperes (A): ";
    cin >> ratedCurrent;
    cout << "Enter the motor starting current in Amperes (A): ";
    cin >> startingCurrent;

    if (startingCurrent > (3.0 * ratedCurrent)) {
        cout << "High starting current. Use proper motor starter." << endl;
    } else {
        cout << "Starting current is acceptable." << endl;
    }

    return 0;
}