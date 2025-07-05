#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> p(5,0);
    vector<int> copy(5,0);
    
    for(int i=0; i<5; i++) {
        for(int j=0; j<4; j++) {
            int score = 0;
            cin >> score;
            p[i] += score;
        }
    }
    copy = p;
    sort(copy.begin(), copy.end(), greater<int>());
    int index = distance(p.begin(), find(p.begin(), p.end(), copy[0]));

    cout << index+1 << " " << copy[0] << endl;
}