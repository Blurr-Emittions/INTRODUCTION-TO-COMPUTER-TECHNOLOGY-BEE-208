#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;

    if (text.find('a') != string::npos) {
        cout << "Contains 'a'\n";
    } else {
        cout << "Does not contain 'a'\n";
    }

    return 0;
}