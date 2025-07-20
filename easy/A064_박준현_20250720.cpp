#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted = heights;
        int result = 0;

        sort(sorted.begin(), sorted.end());

        for(int i=0; i<heights.size(); i++) {
            if(heights[i] != sorted[i]) result ++;
        }

        return result;
    }
};