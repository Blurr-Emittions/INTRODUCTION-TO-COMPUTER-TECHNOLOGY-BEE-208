#include <iostream>

using namespace std;

int main() {
    int status;
    int passCount = 0;
    int failCount = 0;

    cout << "--- Electronic Component Test Counter (15 items) ---" << endl;
    cout << "Enter 1 for PASS or 0 for FAIL." << endl;

    for (int i = 1; i <= 15; i++) {
        cout << "Component #" << i << " status: ";
        cin >> status;

        if (status == 1) {
            passCount++;
        } else if (status == 0) {
            failCount++;
        } else {
            cout << "Invalid flag entered!" << endl;
           
        }
    }

    cout << "\n===== TEST REPORT SUMMARY =====" << endl;
    cout << "Total Passed Components: " << passCount << endl;
    cout << "Total Failed Components: " << failCount << endl;

    return 0;
}