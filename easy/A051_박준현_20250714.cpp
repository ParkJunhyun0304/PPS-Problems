#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string input;
    int result = 0;

    vector<int> num = {64, 67, 70, 73, 76, 79, 83, 86};

    cin >> input;

    for(int i=0; i<input.size(); i++) {
        for(int j=7; j>=0; j--) {
            if((int)input[i] > num[j]) {
                result += j + 3;
                // cout << "단어 : " << input[i] << "(" << (int)input[i] << ") / " << j << " result : " << result << endl;
                break;
            }
        }
    }

    cout << result << endl;
}