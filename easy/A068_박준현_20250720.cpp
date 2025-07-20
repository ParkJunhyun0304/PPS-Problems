#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Queue {
    vector<int> data;
    int front;
    int back;

    Queue() {
        front = 0;
        back = 0;
    }
};

bool isEmpty(Queue &queue) {
    return queue.front == queue.back;
}

void push(Queue &queue, int n) {
    queue.data.push_back(n);
    queue.back++;
}

int pop(Queue &queue) {
    if (!isEmpty(queue)) {
        return queue.data[queue.front++];
    }
    return -1;
}

int size(Queue &queue) {
    return queue.back - queue.front;
}

int front(Queue &queue) {
    return isEmpty(queue) ? -1 : queue.data[queue.front];
}

int back(Queue &queue) {
    return isEmpty(queue) ? -1 : queue.data[queue.back - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Queue queue;
    int count = 0;
    string input;
    int num;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> input;

        if (input == "push") {
            cin >> num;
            push(queue, num);
        } else if (input == "pop") {
            cout << pop(queue) << "\n";
        } else if (input == "size") {
            cout << size(queue) << "\n";
        } else if (input == "empty") {
            cout << isEmpty(queue) << "\n";
        } else if (input == "front") {
            cout << front(queue) << "\n";
        } else if (input == "back") {
            cout << back(queue) << "\n";
        }
    }
}