#include <iostream>

using namespace std;

int a, b, c;
int d;
int f(int n){
    if(n < 10){
        return n;
    }
    return f(n / 10) + (n % 10);
}


int main() {
    cin >> a >> b >> c;
    d = a * b * c;
    cout << f(d);

    return 0;
}