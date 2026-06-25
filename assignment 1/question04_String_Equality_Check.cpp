#include <iostream>
#include <string>
using namespace std;

/*Write a C++ program that reads in a string from the user and checks if it is equal to the
string "hello" using the equality operator. If it is equal, print "Hello!" to the screen,
otherwise print "Goodbye!".*/

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (input == "hello") {
        cout << "Hello!\n";
    } else {
        cout << "Goodbye!\n";
    }

    return 0;
}