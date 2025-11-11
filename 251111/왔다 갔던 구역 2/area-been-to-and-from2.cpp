#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[101] = {0}; // 위치별 사람 수 기록
    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;
        if (dir == 'R') x++; // 오른쪽 이동
        else x--;            // 왼쪽 이동
        arr[x]++;
    }

    int cnt = 0;
    for (int i = 0; i <= 100; i++) {
        if (arr[i] >= 2) cnt += arr[i]; // 2명 이상 겹친 위치의 사람 수 합
    }

    cout << cnt;
    return 0;
}
