#include <iostream>

using namespace std;

int Sum(int n) {
    // 한 자리 숫자라면 제곱한 값이 결과가 됩니다.
        if(n < 10)
                return n * n;

                    // 마지막 자리 숫자의 제곱에 
                        // 남은 숫자들의 합을 계산한 결과를 더해 반환합니다.
                            int digit = (n % 10);
                                return Sum(n / 10) + digit * digit;
                                }

                                int main() {
                                    // 변수 선언 및 입력:
                                        int n;
                                            cin >> n;

                                                cout << Sum(n);
                                                    return 0;
                                                    }
                                                    