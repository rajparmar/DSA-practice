#include <iostream>
using namespace std;

int main() {
    int x;

    while(true) {
        cout << "Enter number: ";
        cin >> x;

        if(cin.fail()) {
            cout << "Invalid input!\n";
        }

        cout << "You entered: " << x << endl;
    }
}