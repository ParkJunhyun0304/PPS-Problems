#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output(numRows);
        int height = 1;
        for(int i=0; i<numRows; i++) {
            output[i] = vector<int>(i+1, 1);
            if(i >= 2) {
                for(int j=0; j<height; j++) {
                    if(j==0) output[i][j] = output[i-1][0];
                    else if(j==height-1) output[i][j] = output[i-1][j-1];
                    else output[i][j] = output[i-1][j-1] + output[i-1][j];
                }
            }
            height++;
        }
        return output;
    }
};