#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter First integer: ";
    cin >> x ;

    cout << "Enter Second integer: ";
    cin >>  y;

    int max = (x > y) ? x : y;

    cout << "The larger integer is: " << max << endl;
    return 0;
}