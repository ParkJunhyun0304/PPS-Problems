#include <iostream>
#include <queue>

using namespace std;

int main() {
    int count;
    queue<int> array;

    cin >> count;

    for(int i=0; i<count; i++) {
        array.push(i+1);
    }

    while(array.size() > 1) {
        array.pop();
        int front = array.front();
        array.pop();
        array.push(front);
    }

    cout << array.front() << "\n";
}