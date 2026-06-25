#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

  
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') decimal += base;
        base *= 2;
    }

    cout << "\n--- Conversion Results ---\n";
    cout << "Decimal:     " << decimal << endl;
    cout << "Hexadecimal: " << hex << uppercase << decimal << endl;
    cout << "Octal:       " << oct << decimal << endl;

    return 0;
}