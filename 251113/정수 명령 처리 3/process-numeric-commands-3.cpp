#include <iostream>
#include <string>
#include <deque>
using namespace std;

int N;
deque<int> s;
string cmd[10000];
int num[10000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> num[i];
            if(cmd[i] == "push_front"){
                s.push_front(num[i]);
            }
            else if(cmd[i] == "push_back"){
                s.push_back(num[i]);
            }
        }
        else if(cmd[i] == "pop_front"){
            cout << s.front() << "\n";
            s.pop_front();
        }
        else if(cmd[i] == "pop_back"){
            cout << s.back() << "\n";
            s.pop_back();
        }
        else if(cmd[i] == "size"){
            cout << s.size() << "\n";
        }
        else if(cmd[i] == "empty"){
            if(s.empty() == true){
                cout << "1" << "\n";
            }
            else{
                cout << "0" << "\n";
            }
        }
        else if(cmd[i] == "front"){
            cout << s.front() << "\n";
        }
        else if(cmd[i] == "back"){
            cout << s.back() << "\n";
        }
    }

    // Please write your code here.

    return 0;
}
