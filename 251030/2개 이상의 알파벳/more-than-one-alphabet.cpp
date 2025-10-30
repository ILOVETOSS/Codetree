#include <iostream>
#include <string>

using namespace std;

string A;

bool ptr(string x){
    int len = x.length();
    for(int i = 0; i < len; i++){
        if(x[i] != x[0]){
            return true;
        }
    }
    return false;
}

int main() {
    cin >> A;
    if(ptr(A)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    // Please write your code here.

    return 0;
}