#include <iostream>

using namespace std;

int main() {
    double l1, l2, l3, average;

    cout << "--- 3-Phase System Readings (6 Sets) ---" << endl;
    for (int set = 1; set <= 6; set++) {
        cout << "\n[Set " << set << "] Input Currents in Amperes (A):" << endl;
        cout << "Line 1 Current: ";
        cin >> l1;
        cout << "Line 2 Current: ";
        cin >> l2;
        cout << "Line 3 Current: ";
        cin >> l3;

        average = (l1 + l2 + l3) / 3.0;
        cout << ">> Set " << set << " Average Current = " << average << " A" << endl;
    }

    return 0;
}