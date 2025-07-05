#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = 0;
    int copy = x;
    
    do {
        num += copy%10;
        copy = copy/10;
    } while(copy > 0);
    
    if(x%num == 0) return true;
    else return false;
}