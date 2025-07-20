#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        bool is_leap_year = false;

        if((year%4 == 0 && year%100 != 0) || (year%400 == 0)) is_leap_year = true;
        int count = (month-1) * 31 + day;

        for(int i=1; i<month; i++) {
            switch(i) {
            case 2:
                if(is_leap_year) count -= 2;
                else count -= 3;
                break;
            case 4: case 6: case 9: case 11:
                count -= 1;
                break;
            }
        }

        return count;
    }
};