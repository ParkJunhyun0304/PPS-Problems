#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int score = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int child = 0;
        int cookie = 0;

        while(child < g.size() && cookie < s.size()) {
            if(s[cookie] >= g[child]) {
                child ++;
            }
            cookie ++;
        }
        return child;
    }
};