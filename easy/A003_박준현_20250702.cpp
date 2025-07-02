#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;

        for(int i=digits.size()-1; i>=0; i--) {
            int hap = digits[i] + carry;
            digits[i] = hap % 10;
            carry = hap / 10;
        }

        if(carry == 1) {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};