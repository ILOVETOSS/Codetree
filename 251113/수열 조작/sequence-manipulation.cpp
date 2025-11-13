#include <iostream>
#include <deque>
using namespace std;

int main() {
    int N;
    cin >> N;

    deque<int> s;

    // 1 ~ N까지 카드 넣기
    for(int i = 1; i <= N; i++){
        s.push_back(i);
    }

    // 카드가 1장 남을 때까지 반복
    while(s.size() > 1) {
        s.pop_front();           // 맨 위 카드 버리기
        int a = s.front();       // 다음 카드 맨 앞 보기
        s.pop_front();           // 그 카드 빼기
        s.push_back(a);          // 맨 뒤로 보내기
    }

    cout << s.front();           // 마지막 카드 출력
    return 0;
}