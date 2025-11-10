#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    string start_day;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> start_day;

    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    // 시작 요일 인덱스 찾기
    int start_idx = 0;
    for (int i = 0; i < 7; i++) {
        if (week[i] == start_day) {
            start_idx = i;
            break;
        }
    }

    // 전체 날짜 수 계산
    int total_days = 0;
    if (m1 == m2) {
        total_days = d2 - d1;
    } else {
        total_days += days[m1] - d1;  // 첫 달 남은 일수
        for (int i = m1 + 1; i < m2; i++) {
            total_days += days[i];    // 중간 달 전체
        }
        total_days += d2;             // 마지막 달 날짜
    }

    // 각 요일 등장 횟수 계산
    int cnt = 0;
    for (int i = 0; i <= total_days; i++) {
        int today_idx = (start_idx + i) % 7;
        if (week[today_idx] == start_day) cnt++;
    }

    cout << cnt;
    return 0;
}
