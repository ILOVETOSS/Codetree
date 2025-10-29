#include <iostream>
#include <string>

using namespace std;

string A;


bool pad(string &x){
    for(int i = 0; i < (int) x.size(); i++){
        if(x[i] != x[(int) x.size() -i -1]){
            return false;
        }

    }
    return true;
}

int main() {
    cin >> A;
    if(pad(A)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    // Please write your code here.

    return 0;
}