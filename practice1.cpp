#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; ++k) {
            cout << "* ";
        }
        cout << "\n";
    }

    for(int i = rows - 1; i >= 1; --i) {
        for(int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; ++k) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}