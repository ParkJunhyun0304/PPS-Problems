#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

int main() {
    int count;
    string line;
    int hap = 0;
    
    cin >> count;
    cin.ignore();

    vector<int> a(count, 0);
    vector<int> b(count, 0);
    vector<int> acpy(count, 0);
    vector<int> bcpy(count, 0);
    
    getline(cin, line);
    stringstream ss1(line);
    string token;
    for(int i=0; i<count && ss1 >> token; i++) {
        a[i] = stoi(token);
    }

    getline(cin, line);
    stringstream ss2(line);
    for(int i=0; i<count && ss2 >> token; i++) {
        b[i] = stoi(token);
    }

    acpy = a;
    bcpy = b;

    sort(acpy.begin(), acpy.end());
    sort(bcpy.begin(), bcpy.end(), greater<int>());
    
    for(int i=0; i<count; i++) {
        int index = distance(b.begin(), find(b.begin(), b.end(), bcpy[i]));
        a[index] = acpy[i]; 
        hap += a[index] * b[index];
    }

    cout << hap << endl;
}