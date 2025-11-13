#include <iostream>
#include <deque>
using namespace std;

int N;
deque<int> s;
int main() {
    cin >> N;
    for(int i = 0; i <= N; i++){
        s.push(i);
    }
    for(int i = 0; i <= N; i++){
        s.pop_front();
        int a
        s.front(a);
        s.pop_front();
        s.push_back(a);
    }
    cout << s.front();

    return 0;
}
