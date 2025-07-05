#include <iostream>

using namespace std;

int main() {
    int row = 0, col = 0;

    cin >> row >> col;

    row --;
    col --;

    cout << row*(col+1) + col << endl;
}