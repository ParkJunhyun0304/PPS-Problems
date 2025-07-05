#include <iostream>

using namespace std;

int main() {
    int nums[3] = {0};
    int counts[10] = {0};
    int hap = 0;

    cin >> nums[0];
    cin >> nums[1];
    cin >> nums[2];

    hap += nums[0] * nums[1] * nums[2];
    int n = 10;
    
    do
    {
        counts[hap%10] += 1;
        hap = hap/10;
    } while (hap > 0);
    
    for(int i=0; i<10; i++) {
        cout << counts[i] << endl;
    }
}