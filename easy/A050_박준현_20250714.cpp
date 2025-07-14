#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    string result;
    int change;
    int diff = 'Z'-'A' + 1;
    cin >> input;

    for(int i=0; i<input.size(); i++) {
        change = (int)input[i] - 3;
        if(change < (int)'A') {
            result.push_back(((char)change) + diff);
        } else {
            result.push_back((char)change);
        }
    }
    
    cout << result << endl;
}