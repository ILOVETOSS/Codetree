#include <iostream>
using namespace std;

int main() {
    int N, B;
    int arr[100];
    int cnt = 0;

    cin >> N >> B;

    // 진법 변환 과정
    while (N > 0) {
        arr[cnt++] = N % B;
        N /= B;
    }

    // 결과를 거꾸로 출력
    for (int i = cnt - 1; i >= 0; i--) {
        if (arr[i] >= 10)
            cout << char('A' + (arr[i] - 10)); // 예: 10 → A, 11 → B ...
        else
            cout << arr[i];
    }

    return 0;
}
