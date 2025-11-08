#include <iostream>

using namespace std;

int n;
int f(int x){
    if(x == 1){
        return 0;
    }
    if(x % 2 == 0){
        return (x / 2) + 1;
    }
    else{
        return (3 * x + 1) + 1;
    }
}

int main() {
    cin >> n;
    cout << f(n);
    // Please write your code here.

    return 0;
}