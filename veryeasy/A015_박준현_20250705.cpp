#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    string line;
    int hap = 0;

    getline(cin, line);
    stringstream ss(line);
    string token;
    while (ss >> token) {
        nums.push_back(stoi(token));
    }

    for(int i=0; i<nums.size(); i++) {
        hap += nums[i]*nums[i];
    }
    cout << hap%10 << endl;
}