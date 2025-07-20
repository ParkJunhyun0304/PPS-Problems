#include <iostream>
#include <vector>

using namespace std;

int main() {
    string input;
    vector<vector<int>> nums(10, vector<int>(1,0));

    cin >> input;

    for(int i=0; i < input.length(); i++) {
        nums[input[i]-'0'][0]++;
    }
    for(int i=9; i>=0; i--) {
        for(int j=0; j<nums[i][0]; j++) {
            cout << i;
        }
    }
}