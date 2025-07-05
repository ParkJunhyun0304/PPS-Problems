#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int arr[8];
    int flag = 1;
    int sort = 0;

    getline(cin, input);

    for(int i=0; i<input.size(); i++) {
        if(i%2 == 0) {
            arr[i/2] = input[i] - '0';
        }
    }

    if(arr[0] == 1 && arr[7] == 8) {
        for(int i=1; i<8; i++) {
            if(arr[i-1] != i) flag = 0;
        }
    } else if(arr[0] == 8 && arr[7] == 1) {
        sort = 1;
        for(int i=0; i<8; i++) {
            if(arr[i] != 8-i) flag = 0;
        }
    } else flag = 0;

    if(flag == 0) cout << "mixed" << endl;
    else {
        if(sort == 0) cout << "ascending" << endl;
        else if(sort == 1) cout << "descending" << endl;
    }
}