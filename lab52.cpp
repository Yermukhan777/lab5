#include <iostream>
#include <stack>
using namespace std;

int main() {
    string input;
    stack<char> s;

    cout << "Enter a string: ";
    cin >> input;

    for (char ch : input) {
        s.push(ch);
    }

    cout << "Reversed string: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}
