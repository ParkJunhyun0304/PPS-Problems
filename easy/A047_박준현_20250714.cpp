#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string input;
    int i;

    cin >> input;

    for(i=0; i<input.size(); i+=10) {
        cout << input.substr(i,10) << endl;
    }
}