#include <iostream>
using namespace std;

int n, m;
int A[101]; // 1-based index 사용

int ptr(int p) {
    int dap = 0;
    while (true) {
        dap += A[p];       // 현재 위치 값 더하기
        if (p == 1) break; // 1이 되면 종료
        if (p % 2 == 0)    // 짝수면 반으로 나누기
            p /= 2;
        else               // 홀수면 1 빼기
            p -= 1;
    }
    return dap;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    cout << ptr(m);
    return 0;
}
