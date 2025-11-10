#include <iostream>
using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int cnt = 1; // 시작일 포함해서 1로 시작
    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    while (!(m1 == m2 && d1 == d2)) {
        d1++;
        if (d1 > arr[m1]) {
            d1 = 1;
            m1++;
        }
        cnt++;
    }

    cout << cnt;
    return 0;
}
