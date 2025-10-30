#include <iostream>

using namespace std;

int a, b;

void ptr(int x,int y){
    if(x > y){
        a += 25;
        b = b * 2;
    }
    else if(x < y){
        b += 25;
        a = a * 2;
    }

}

int main() {
    cin >> a >> b;
    ptr(a,b);
    cout << a << " " << b;
    // Please write your code here.

    return 0;
}