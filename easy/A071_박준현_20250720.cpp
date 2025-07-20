#include <iostream>
#include <vector>

using namespace std;

class MyQueue {
private:
    vector<int> inputs;
    int pointer;
public:
    MyQueue() {
        pointer = 0;
    }
    
    void push(int x) {
        inputs.push_back(x);
    }
    
    int pop() {
        if(pointer < inputs.size()) {
            return inputs[pointer++];
        }
        return -1;
    }
    
    int peek() {
        return inputs[pointer];
    }
    
    bool empty() {
        if(pointer == inputs.size()) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */