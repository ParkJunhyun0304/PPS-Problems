#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int count = 0;

    cin >> count;

    vector<pair<int, int>> inputs(count);

    for(int i=0; i<count; i++) {
        cin >> inputs[i].first >> inputs[i].second;
    }

    sort(inputs.begin(), inputs.end());
    

    for(int i=0; i<count; i++) {
        cout << inputs[i].first << " " << inputs[i].second << "\n";
    }

}