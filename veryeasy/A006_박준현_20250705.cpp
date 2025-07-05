#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    for(int i=0; i<s.length(); i++) {
        if(tolower(s[i]) == 'p') p++;
        if(tolower(s[i]) == 'y') y++;
    }
    if(p == y) return true;
    else if(p != y) return false;
}