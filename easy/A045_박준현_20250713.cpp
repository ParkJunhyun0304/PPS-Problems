#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int alpha[26] = {0};
    int result[2] = {0};
    cin >> input;

    for(int i=0; i<input.size(); i++) {
        input[i] = tolower(input[i]);
    }
    
    for(int i=0; i<input.size(); i++) {
        alpha[(int)input[i] - 'a']++;
    }
    
    for(int i=0; i<26; i++) {
        if(alpha[i] > result[0]) {
            result[0] = alpha[i];
            result[1] = i;
        }
    }

    for(int i=0; i<26; i++) {
        if(i != result[1]) {
            if(alpha[i] == result[0]) {
                cout << "?" << endl;
                return 0;
            }
        }
    }

    cout << (char)(result[1] + 'A') << endl;
}