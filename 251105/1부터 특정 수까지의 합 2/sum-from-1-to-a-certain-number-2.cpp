#include <iostream>

using namespace std;

int N;
int cnt = 0;

void f(int n){
    if(n == 0){
        return;
    }
    f(n-1);
    cnt += n;

}


int main() {
    cin >> N;
    f(N);
    cout << cnt;
    // Please write your code here.

    return 0;
}