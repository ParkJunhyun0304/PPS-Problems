#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> input;
    string result;
    int alpha[26] = {0};
    int p_size = 0;
    bool isPREDAJA = true;

    cin >> p_size;
    for(int i=0; i<p_size; i++) {
        string name;
        cin >> name;
        input.push_back(name);
    }

    for(int i=0; i<input.size(); i++) {
        alpha[(int)input[i][0] - 'a']++;
    }
    
    for(int i=0; i<26; i++) {
        if(alpha[i] >= 5) {
            result.push_back((char)(i + 'a'));
            isPREDAJA = false;
        }
    }

    if(isPREDAJA) result = "PREDAJA";

    cout << result << endl;
}