#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0;
        string result = "";
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(') {
                if(open > 0) result += "(";
                open ++;
            } else if(s[i] == ')') {
                open --;
                if(open > 0) result += ")";
            }
        }

        return result;
    }
};