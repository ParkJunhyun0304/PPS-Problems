#include <iostream>

using namespace std;

int main() {
    int count;
    cin >> count;

    int Y = 0, M = 0;
    for(int i=0; i<count; i++) {
        int time = 0;
        cin >> time;
        Y += (time/30 + 1) * 10;
        M += (time/60 + 1) * 15;
    }

    if(Y < M) cout << "Y " << Y << endl;
    else if(Y > M) cout << "M " << M << endl;
    else cout << "Y M " << Y << endl;
}