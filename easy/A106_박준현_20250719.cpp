#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    int alpha[26] = {0};
    int result = 0;
    string input;

    cin >> count;

    for(int i=0; i<count; i++) {
        cin >> input;
        for(char c : input) {
            alpha[c-'A'] ++;
        }
        for(int i=0; i<26; i++) {
            if(alpha[i] == 0) {
                result += i + 'A';
            }
            alpha[i] = 0;
        }
        cout << result << endl;
        result = 0;
    }


}