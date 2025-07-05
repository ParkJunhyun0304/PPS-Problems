#include <iostream>

using namespace std;

int main() {
    int count;
    int result = 1;
    cin >> count;
    
    for(int i=0; i<count; i++) {
        int num;
        cin >> num;

        result += num;
        result --;
    }

    cout << result << endl;
}