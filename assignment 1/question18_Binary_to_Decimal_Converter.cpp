#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int base = 1;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    cout << "Decimal value: " << decimal << "\n";
    return 0;
}
