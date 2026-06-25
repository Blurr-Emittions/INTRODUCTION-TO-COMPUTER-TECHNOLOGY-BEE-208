#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Enter first floating point number: ";
    cin >> a ;

    cout << "Enter Second floating point number: ";
    cin >> b;

    float max = (a > b) ? a : b;

    cout << "The larger number is: " << max << "\n";
    return 0;
}