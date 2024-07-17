#include <iostream>
using namespace std;

int main() {
    int n = 6; // Number of rows for the pattern

    // Loop for upper half
    for (int i = 0; i < n; ++i) {
        char ch = 'A';
        
        // Printing characters in each row
        for (int j = 0; j < n - i; ++j) {
            cout << ch++;
        }

        // Printing spaces
        for (int j = 0; j < 2 * i; ++j) {
            cout << " ";
        }

        ch--;

        // Printing characters in reverse order
        for (int j = 0; j < n - i; ++j) {
            cout << --ch;
        }

        cout << endl;
    }

    // Loop for lower half
    for (int i = n - 2; i >= 0; --i) {
        char ch = 'A';

        // Printing characters in each row
        for (int j = 0; j < n - i; ++j) {
            cout << ch++;
        }

        // Printing spaces
        for (int j = 0; j < 2 * i; ++j) {
            cout << " ";
        }

        ch--;

        // Printing characters in reverse order
        for (int j = 0; j < n - i; ++j) {
            cout << --ch;
        }

        cout << endl;
    }

    return 0;
}
