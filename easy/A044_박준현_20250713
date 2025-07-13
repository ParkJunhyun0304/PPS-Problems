#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0, late = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'A') {
                absent ++;
                late = 0;
                if(absent == 2) return false;
            } else if(s[i] == 'L') {
                late ++;
                if(late == 3) return false;
            } else {
                late = 0;
            }
        }
        return true;
    }
};