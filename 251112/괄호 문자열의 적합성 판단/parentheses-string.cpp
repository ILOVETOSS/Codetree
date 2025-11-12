#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool pr(const string &str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(') s.push(c);
        else if (c == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string str;
    cin >> str;

    if (pr(str)) cout << "Yes";
    else cout << "No";

    return 0;
}
