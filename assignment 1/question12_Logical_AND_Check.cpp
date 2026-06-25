#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if ((number % 2 != 0) && (number % 3 == 0)) {
        cout << number << " is odd and divisible by 3.\n";
    }

    else {
        cout << number << " does not meet both conditions.\n";
    }

    return 0;
}