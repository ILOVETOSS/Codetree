#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string day[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

    // 날짜를 1년 1월 1일부터 지난 일수로 환산
    int total1 = 0, total2 = 0;
    for (int i = 1; i < m1; i++) total1 += arr[i];
    total1 += d1;

    for (int i = 1; i < m2; i++) total2 += arr[i];
    total2 += d2;

    int diff = total2 - total1; // 며칠 차이인지

    // 5월 4일이 월요일 (Mon, index = 1) 기준
    int base_index = 1;  // Mon
    int result_index = (base_index + diff) % 7;

    if (result_index < 0) result_index += 7; // 음수 보정

    cout << day[result_index];
    return 0;
}
