#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    int count = 0;
    vector<vector<int>> scores;
    string line;
    int hap = 0;
    float avg = 0;
    int overAvg = 0;

    cin >> count;
    cin.ignore();  // 줄바꿈 문자 처리

    for (int i = 0; i < count; i++) {
        getline(cin, line);

        stringstream ss(line);
        string token;
        vector<int> temp;

        while (ss >> token) {
            temp.push_back(stoi(token));
        }

        scores.push_back(temp);
    }

    for(int i=0; i<count; i++) {
        for(int j=1; j<=scores[i][0]; j++) hap += scores[i][j];
        avg = (static_cast<float>(hap)/scores[i][0]);
        for(int j=1; j<=scores[i][0]; j++) {
            if(scores[i][j] > avg) overAvg ++;
        }
        cout << (static_cast<float>(overAvg) / scores[i][0]) * 100 << "%" << endl;
        hap = 0;
        avg = 0;
        overAvg = 0;
    }
}