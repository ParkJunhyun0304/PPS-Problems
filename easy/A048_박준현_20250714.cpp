#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int count, result=0;
    vector<string> inputs;
    vector<char> check;
    string temp;
    bool flag = true;

    cin >> count;

    for(int i=0; i<count; i++) {
        cin >> temp;
        inputs.push_back(temp);
    }

    for(int i=0; i<count; i++) {
        for(int j=0; j<inputs[i].size(); j++) {
            if(inputs[i][j] != inputs[i][j+1]) {
                if(find(check.begin(), check.end(), inputs[i][j]) != check.end()) {
                    flag = false;
                    break;
                }
                check.push_back(inputs[i][j]);
            }
        }
        if(flag) result ++;
        flag = true;
        check = vector<char>();
    }
    cout << result << endl;
}