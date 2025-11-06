#include <iostream>

using namespace std;

int N;
    
int f(int n) {
    if (n == 1) return 0; // 더 이상 나눌 수 없으면 0회
    if (n % 2 == 0) return 1 + f(n / 2);
    else return 1 + f(n / 3);
}

int main() {
    int N;
    cin >> N;
    cout << f(N);
}
