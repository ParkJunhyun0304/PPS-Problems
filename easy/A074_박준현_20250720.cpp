#include <iostream>
#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = 0;
        string str = "";

        for(int i=0; i<s.size(); i++) {
            if(isalpha(s[i])) str += tolower(s[i]);
            else if(isdigit(s[i])) str += s[i];
        }

        end = str.size()-1;

        while(start < end) {
            if(str[start] != str[end]) return false;
            start ++;
            end --;
        }
        return true;
    }
};