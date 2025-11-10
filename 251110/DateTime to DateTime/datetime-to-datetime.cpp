#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int base_day = 11, base_hour = 11, base_min = 11;
    int cnt = 0;

    // 입력이 기준보다 빠른 경우
    if (a < base_day || 
       (a == base_day && b < base_hour) || 
       (a == base_day && b == base_hour && c < base_min)) {
        cout << -1;
        return 0;
    }

    int s_day = a - base_day;
    int s_hour = b - base_hour;
    int s_min = c - base_min;

    cnt = s_min + 60 * s_hour + 60 * (s_day * 24);

    cout << cnt;
    return 0;
}
