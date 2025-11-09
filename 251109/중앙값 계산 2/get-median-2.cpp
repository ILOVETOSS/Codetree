#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sort(arr, arr + i + 1); // 지금까지 입력된 수 정렬

        if (i % 2 == 0) { // i가 짝수 = 입력된 개수가 홀수일 때
            cout << arr[i / 2] << " ";
        }
    }
    return 0;
}
