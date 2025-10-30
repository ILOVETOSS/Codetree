#include <iostream>

using namespace std;

int a, b;

void ptr(int x, int y){
    if(x > y){
        b += 10;
        a = a * 2;
    }
    else if(x < y){
        a += 10;
        b = b * 2;
    }
}

int main() {
    cin >> a >> b;
    // Please write your code here.
    ptr(a,b);
    cout << a << " " << b;

    return 0;
}