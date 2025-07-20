#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length() < b.length()) {
            string c = a;
            a = b;
            b = c;
        }
        string result = "";
        int remain = 0;
        int hap = 0;
        int b_index = b.length()-1;
        for(int i=a.length()-1; i>=0; i--) {
            if(b_index >= 0) {
                hap = (a[i] - '0') + (b[b_index] - '0') + remain;
                b_index--;
            } else {
                hap = (a[i] - '0') + remain;
            }
            if(hap == 2) {
                remain = 1;
                hap = 0;
            } else if(hap == 3){
                remain = 1;
                hap = 1;
            } else {
                remain = 0;
            }
            result = to_string(hap) + result;
        }

        if(remain == 1) {
            result = "1" + result;
        }
        return result;
    }
};