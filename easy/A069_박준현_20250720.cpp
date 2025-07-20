#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    vector<int> result;
    int count, start_point, index=0;

    cin >> count >> start_point;

    for(int i=1; i<count+1; i++) {
        nums.push_back(i);
    }

    for(int i=0; i<count; i++) {
        index = (index + start_point -1) % nums.size();
        result.push_back(nums[index]);
        nums.erase(nums.begin() + index);
    }

    cout << "<";
    for(int i=0;  i<count; i++) {
        if(i == count -1)
            cout << result[i];
        else 
            cout << result[i] << ", ";
    }
    cout << ">\n";
}