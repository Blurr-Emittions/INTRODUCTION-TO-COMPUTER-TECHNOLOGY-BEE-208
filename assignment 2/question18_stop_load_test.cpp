
#include <iostream>

using namespace std;

int main() {
    double applianceLoad;
    double currentTotalLoad = 0.0;

    cout << "--- Main Distribution Load Safeguard Test ---" << endl;

    for (int i = 1; i <= 20; i++) {
        cout << "Enter power rating for appliance #" << i << " in Watts (W): ";
        cin >> applianceLoad;

        currentTotalLoad += applianceLoad;

        if (currentTotalLoad > 5000.0) {
            cout << " Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }

    cout << "\n===== LOAD ANALYSIS FINAL REPORT =====" << endl;
    cout << "Final Total System Load = " << currentTotalLoad << " W" << endl;

    return 0;
}