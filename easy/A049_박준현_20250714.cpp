#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init();

int vowel_count = 0, consonant_count = 0;
bool vowel_check = false;
bool acceptable = true;

int main() {
    vector<string> inputs;
    string temp;
    vector<char> vowel = {'a','e','i','o','u'};

    do {
        cin >> temp;
        inputs.push_back(temp);
    } while(temp != "end");

    inputs.pop_back();

    for(int i=0; i<inputs.size(); i++) {
        for(int j=0; j<inputs[i].size(); j++) {
            if(inputs[i][j] == inputs[i][j+1]) {
                if(inputs[i][j] != 'e' && inputs[i][j] != 'o') acceptable = false;
            }
            if(find(vowel.begin(), vowel.end(), inputs[i][j]) != vowel.end()) { // 모음인경우
                vowel_count++;
                consonant_count = 0;
                if(!vowel_check) vowel_check = true;
            } else { // 모음이 아닌경우
                consonant_count ++;
                vowel_count = 0;
            }
            if(consonant_count >= 3 || vowel_count >= 3) acceptable = false;

            if(!acceptable) break;
        }
        if(acceptable && vowel_check) cout << "<" << inputs[i] << "> is acceptable." << endl;
        else cout << "<" << inputs[i] << "> is not acceptable." << endl;

        init();
    }
}

void init() {
    vowel_count = 0;
    consonant_count = 0;
    vowel_check = false;
    acceptable = true;
}