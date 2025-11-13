#include <iostream>
#include <string>
#include <queue> 
using namespace std;

int N;
string command[10000];
int A[10000];

queue<int> s;
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A[i];
            s.push(A[i]);
        }
        else if(command[i] == "pop"){
            cout << s.front() << "\n";
            s.pop();
        }
        else if(command[i] == "size"){
            cout << s.size() << "\n";
        }
        else if(command[i] == "front"){
            cout << s.front() << "\n";
        }
        else if(command[i] == "empty"){
            if(s.empty() == true){
                cout << "1" << "\n";
            }
            else{
                cout << "0" << "\n";
            }
        }

    }
    
    // Please write your code here.

    return 0;
}