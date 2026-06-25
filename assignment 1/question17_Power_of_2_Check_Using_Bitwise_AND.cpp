#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0 && (number & (number - 1)) == 0) {
        cout << number << " is a power of 2.\n";
    } 
    
    else {
        cout << number << " is not a power of 2.\n";
    }

    return 0;
}