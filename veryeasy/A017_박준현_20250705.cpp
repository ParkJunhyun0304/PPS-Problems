#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int numcount[9] = {0};

    string input;
    cin >> input;

    for(int i=0; i<input.length(); i++) {
        if(input[i] == '9' || input[i] == '6'){
            numcount[6]++;
        }
        else numcount[(input[i] - '0')]++;
    }
    numcount[6] = ceil(numcount[6] / 2.0);

    sort(numcount, numcount+9, greater<int>());

    cout << numcount[0] <<endl;
}