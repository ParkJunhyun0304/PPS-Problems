#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int count;
    vector<string> input;
    string temp;
    int score = 0, bonus = 0;
    bool isContinue = false;

    cin >> count;

    for(int i=0; i<count; i++) {
        cin >> temp;
        input.push_back(temp);
    }

    for(int i=0; i<count; i++) {
        for(int j=0; j<input[i].size(); j++) {
            if(input[i][j] == 'O') {
                score += 1 + bonus;
                
                if(input[i][j+1] == 'O') {
                    bonus++;
                } else {
                    bonus = 0;
                }
            }
        }
        cout << score << endl;
        bonus = 0;
        score = 0;
    }
}