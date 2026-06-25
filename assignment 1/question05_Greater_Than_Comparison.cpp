#include <iostream>
using namespace std;
int main() {
    int first, second;
    cout << "Enter First integer: "<<endl;
    cin >> first;

    cout << "Enter Second integer: "<<endl;
    cin >> second ;

    if (first > second) {
        cout << "First value is greater\n";
    } else {
        cout << "Second value is greater\n";
    }

    return 0;
}