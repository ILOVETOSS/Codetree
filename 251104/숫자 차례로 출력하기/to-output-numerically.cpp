#include <iostream>

using namespace std;

int N;


void f(int k){
    if(k == 0){
        return;
    }
    f(k-1);
    cout << k << " ";
}

void g(int p){
    if(p == 0){
        return;
    }
    cout << p << " ";
    g(p-1);
    
}


int main() {
    cin >> N;
    f(N);
    cout << "\n";
    g(N);
    // Please write your code here.

    return 0;
}