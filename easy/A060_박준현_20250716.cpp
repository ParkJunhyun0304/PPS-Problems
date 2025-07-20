#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> nums;
        int result = 0;

        for(string ops : operations) {
            if(ops == "C") {
                nums.pop_back();
            } else if(ops == "D") {
                int num = nums.back();
                nums.push_back(num*2);
            } else if(ops == "+") {
                int num1 = nums.back();
                nums.pop_back();
                int num2 = nums.back();
                nums.push_back(num1);
                nums.push_back(num1+num2);
            } else {
                nums.push_back(stoi(ops));
            }
        }

        if(nums.size() == 0) {
            return 0;
        } else {
            for(int n : nums) {
                result += n;
            }
        }
        
        return result;
    }
};