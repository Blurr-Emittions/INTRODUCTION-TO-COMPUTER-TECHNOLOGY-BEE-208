#include <iostream>
using namespace std;
//explain
int main() {
    int x, y;
    cout << "Enter x: ";
    cin >> x ;

    cout << "Enter y: ";
    cin >>y;


    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << "After swapping: x = " << x << ", y = " << y << "\n";
    return 0;
}