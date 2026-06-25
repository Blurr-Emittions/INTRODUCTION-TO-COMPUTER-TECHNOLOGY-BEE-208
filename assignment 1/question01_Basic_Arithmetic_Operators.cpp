#include <iostream>
using namespace std;

// Write a C++ program that takes in two integer values from the user and calculates the
// sum, difference, product, and quotient using the appropriate operators.
int main(){
    int first_integer, second_integer;

    cout << "Input first integer: ";
    cin >> first_integer;

    cout << "Input Second integer: ";
    cin >> second_integer;

    cout << "Sum: " << (first_integer + second_integer) << endl;
    cout << "difference: " << (first_integer - second_integer) << endl;
    cout << "Product: " << (first_integer * second_integer) << endl;
    
   
    if (second_integer != 0){
        cout << "Quotient: " << (first_integer / second_integer) << endl;
    }
    else {
        cout << "You can not divide by zero" << endl;
    }

    return 0;
}
