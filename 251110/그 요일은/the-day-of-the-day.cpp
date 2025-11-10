#include <iostream>
using namespace std;

int main() {
    int m1,d1,m2,d2;
    string target;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> target;

    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    // 날짜를 연초부터 지난 일수로 변환
    int start_day = 0, end_day = 0;
    for(int i=1;i<m1;i++) start_day += days[i];
    start_day += d1;
    for(int i=1;i<m2;i++) end_day += days[i];
    end_day += d2;

    int total_days = end_day - start_day + 1; // 시작일 포함

    // 시작 요일 인덱스 (문제에서 2/5이 Mon)
    int start_idx = 0; 

    // 찾는 요일 인덱스
    int target_idx = 0;
    for(int i=0;i<7;i++){
        if(week[i]==target) target_idx=i;
    }

    // 시작일부터 며칠 후에 찾는 요일이 처음 등장하는지
    int first_offset = (target_idx - start_idx + 7) % 7;

    int remaining_days = total_days - first_offset;
    int count = 0;
    if(remaining_days >= 0){
        count = 1 + (remaining_days-1)/7;
    }

    cout << count;

    return 0;
}
