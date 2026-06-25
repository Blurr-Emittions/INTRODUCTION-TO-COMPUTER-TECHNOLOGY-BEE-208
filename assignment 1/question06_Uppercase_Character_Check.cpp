#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    if (isalpha(character) && isupper(character)) {
        cout << "Uppercase letter\n";
    } else {
        cout << "Not an uppercase letter\n";
    }

    return 0;
}