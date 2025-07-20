#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int count;
    cin >> count;

    vector<int> dis(count);
    for (int i = 0; i < count; i++) cin >> dis[i];

    vector<int> extended(2 * count);
    for (int i = 0; i < 2 * count; i++) {
        extended[i] = dis[i % count];
    }

    int start = 0, end = 0, sum = 0, ans = INT_MAX;
    int target_length = count - 1;

    while (end < 2 * count) {
        sum += extended[end++];
        if (end - start > target_length) {
            sum -= extended[start++];
        }
        if (end - start == target_length) {
            ans = min(ans, sum);
        }
    }

    cout << ans << endl;
}