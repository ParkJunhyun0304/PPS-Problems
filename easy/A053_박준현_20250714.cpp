#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Stack{
    vector<int> input;
    int pointer;

    Stack() {
        input.reserve(10000);
        pointer = 0;
    }
};

void push(Stack &stack, int n) {
    stack.input[stack.pointer++] = n;
}

int pop(Stack &stack) {
    if(stack.pointer == 0) return -1;
    return stack.input[--stack.pointer];
}

int size(Stack &stack) {
    return stack.pointer;
}

int top(Stack &stack) {
    if(stack.pointer == 0) return -1;
    return stack.input[stack.pointer-1];
}

bool empty(Stack &stack) {
    if(stack.pointer == 0) return true;
    else return false;
}

int main() {
    Stack stack;
    int count = 0;
    string input;
    int input_num;

    cin >> count;

    for(int i=0; i<count; i++) {
        cin >> input;
        if(input == "push") {
            cin >> input_num;
            push(stack, input_num);
        } else if(input == "pop") {
            cout << pop(stack) << endl;
        } else if(input == "size") {
            cout << size(stack) << endl;
        } else if(input == "empty") {
            cout << empty(stack) << endl;
        } else if(input == "top") {
            cout << top(stack) << endl;
        }
    }
}