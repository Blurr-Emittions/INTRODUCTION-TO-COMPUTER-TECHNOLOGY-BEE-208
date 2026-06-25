#include <iostream>

using namespace std;

int main() {
    double temperature;

    cout << "Enter the cable temperature in degrees Celsius (°C): ";
    cin >> temperature;

    if (temperature > 70.0) {
        cout << "Alert: Cable overheating detected." << endl;
    } else {
        cout << "Status: Cable temperature is within safe range." << endl;
    }

    return 0;
}