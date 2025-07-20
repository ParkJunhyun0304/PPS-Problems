#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        vector<int> counts;
        int count = 0;

        while(columnNumber > 0) {
            columnNumber--;
            char alpha = (char)(columnNumber % 26 + 'A');
            result = alpha + result;
            columnNumber /= 26;
        }
        return result;
    }
};