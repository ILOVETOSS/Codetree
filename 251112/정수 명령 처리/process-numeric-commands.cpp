#include <iostream>
#include <stack> 
using namespace std;

int N;
string command[10000];
int value[10000];
stack<int> s;
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }
    for(int j = 0; j <= N; j++){
        if(command[j] == "push"){
            s.push(value[j]);
        }
        if(command[j] == "pop"){
            s.pop();
            cout << s.top();
        }
        if(command[j] == "size"){
            cout << s.size(); 
        }
        if(command[j] == "empty"){
            if(s.empty()){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        if(command[j] == "top"){
            cout << s.top();
        }

    }

    // Please write your code here.

    return 0;
}
