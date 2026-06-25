#include <iostream>

using namespace std;

int main() {
    double power, time;
    double totalEnergy = 0.0;

    cout << "--- Total Energy consumption for 8 Appliances ---" << endl;
    for (int i = 1; i <= 8; i++) {
        cout << "\nAppliance #" << i << ":" << endl;
        cout << "  Enter power rating in Watts (W): ";
        cin >> power;
        cout << "  Enter usage time in Hours (h): ";
        cin >> time;

        double energy = power * time;
        totalEnergy += energy;
    }

    cout << "\nFinal Result: Total energy consumed by all appliances = " 
         << totalEnergy << " Wh" << endl;
    return 0;
}