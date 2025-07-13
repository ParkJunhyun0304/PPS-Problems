#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        for(int i=0; i<strs[0].size(); i++) {
            char alpha = strs[0][i];
            bool flag = true;
            for(int j=1; j<strs.size(); j++) {
                if(strs[j][i] != alpha) {
                    flag = false;
                    return result;
                }
            }
            if(flag) result.push_back(alpha);
        }
        return result;
    }
};