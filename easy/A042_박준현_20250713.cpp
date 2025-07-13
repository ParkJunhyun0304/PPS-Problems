#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_result;
        string t_result;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '#') {
                if(!s_result.empty()) s_result.pop_back();
            } else {
                s_result.push_back(s[i]);
            }
        }

        for(int i=0; i<t.size(); i++) {
            if(t[i] == '#') {
                if(!t_result.empty()) t_result.pop_back();
            } else {
                t_result.push_back(t[i]);
            }
        }
        // cout << s_result.size() << " | " << t_result.size() << endl;

        // for(int i=0; i<s_result.size(); i++) cout << s_result[i] << " / ";
        // cout << endl;
        // for(int i=0; i<t_result.size(); i++) cout << t_result[i] << " / ";

        if(s_result.size() != t_result.size()) {
            return false;
        } else {
            for(int i=0; i<s_result.size(); i++) {
                if(s_result[i] != t_result[i]) {
                    return false;
                }
            }
            return true;
        }
    }
};