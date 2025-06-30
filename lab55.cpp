#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_front(10);   // First input
    dq.push_back(20);    // Second input
    dq.push_front(5);    // Third input

    cout << "Deque contains: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Pop back: " << dq.back() << endl;
    dq.pop_back();

    cout << "Pop front: " << dq.front() << endl;
    dq.pop_front();

    cout << "Remaining: ";
    for (int val : dq) {
        cout << val << " ";
    }

    return 0;
}
