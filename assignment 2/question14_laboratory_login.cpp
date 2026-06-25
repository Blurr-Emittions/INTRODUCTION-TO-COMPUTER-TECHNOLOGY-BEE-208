#include <iostream>
#include <string>

using namespace std;

int main() {
    string accessCode;
    int attempts = 0;
    bool accessGranted = false;

    cout << "--- Secure Laboratory Access Verification ---" << endl;

    while (attempts < 3 && !accessGranted) {
        cout << "Enter laboratory access code (Attempt " << (attempts + 1) << "/3): ";
        cin >> accessCode;

        if (accessCode == "BEE208") {
            cout << "Access granted." << endl;
            accessGranted = true;
        } else {
            cout << "Incorrect code configuration." << endl;
            attempts++;
        }
    }

    if (!accessGranted) {
        cout << " Access denied. Maximum attempts reached." << endl;
    }

    return 0;
}