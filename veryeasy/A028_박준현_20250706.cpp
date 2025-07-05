#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;

    string result = "";
    int carry = 0;

    int i = (int)n1.size() - 1;
    int j = (int)n2.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digitA = (i >= 0) ? n1[i] - '0' : 0;
        int digitB = (j >= 0) ? n2[j] - '0' : 0;

        int sum = digitA + digitB + carry;
        carry = sum / 10;
        sum %= 10;

        result.push_back(sum + '0');

        i--;
        j--;
    }

    reverse(result.begin(), result.end());

    cout << result << endl;
}