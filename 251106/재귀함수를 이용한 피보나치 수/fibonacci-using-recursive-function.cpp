#include <iostream>

using namespace std;

int Fibo(int n) {
    // 첫 번째, 두 번째 원소는 1입니다.
    if(n <= 2)
        return 1;

    // 3번째 원소부터는 다음 점화식을 만족합니다.
    return Fibo(n - 1) + Fibo(n - 2);
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    cout << Fibo(n);
    return 0;
}
