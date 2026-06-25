
#include <iostream>

using namespace std;

int main() {
    double powerFactor;

    cout << "Enter the electrical load power factor: ";
    cin >> powerFactor;

    if (powerFactor < 0.0 || powerFactor > 1.0) {
        cout << "Status: Invalid power factor" << endl;
    } 
    else if (powerFactor >= 0.0 && powerFactor <= 0.50) {
        cout << "Status: Poor power factor" << endl;
    } 
    else if (powerFactor >= 0.51 && powerFactor <= 0.80) {
        cout << "Status: Fair power factor" << endl;
    } 
    else if (powerFactor >= 0.81 && powerFactor <= 0.95) {
        cout << "Status: Good power factor" << endl;
    } 
    else {
        cout << "Status: Excellent power factor" << endl;
    }

    return 0;
}