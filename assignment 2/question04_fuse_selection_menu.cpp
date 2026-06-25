#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "===== FUSE SELECTION MENU =====" << endl;
    cout << "1. 5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;
    cout << "===============================" << endl;
    cout << "Select an option (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Suitable Application: Delicate electronics and instrumentation protection." << endl;
            break;
        case 2:
            cout << "Suitable Application: Domestic lighting circuits." << endl;
            break;
        case 3:
            cout << "Suitable Application: Standard plug tops / home appliances." << endl;
            break;
        case 4:
            cout << "Suitable Application: Dedicated radial kitchen appliances or water heaters." << endl;
            break;
        case 5:
            cout << "Suitable Application: High-power ring mains or cooker control units." << endl;
            break;
        default:
            cout << "Error: Invalid selection." << endl;
            break;
    }

    return 0;
}