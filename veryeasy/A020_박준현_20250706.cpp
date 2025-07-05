#include <iostream>

using namespace std;

int main() {
    int people = 0, add = 0, del = 0, max = 0;

    for(int i=0; i<4; i++) {
        cin >> del;
        cin >> add;

        people = people + add - del;

        if(people > max) max = people;
    }

    cout << max << endl;
}