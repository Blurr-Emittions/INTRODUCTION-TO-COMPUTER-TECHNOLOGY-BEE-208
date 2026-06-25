#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 != 0) {
        cout << "Odd number\n";
    } 

    else {
        cout << "Even number\n";
    }

    return 0;
}