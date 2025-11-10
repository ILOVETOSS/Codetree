#include <iostream>

using namespace std;

int a, b, c;



int main() {
    int y,m,d,h,mm;
    y = 2011;
    m = 11;

    d = 11;
    h = 11;
    mm = 11;
    int s_day;
    int s_h;
    int cnt;
    int s_m;

    cin >> a >> b >> c;
    s_day = a - d;
    s_h = b - h;
    s_m = c - mm;
    cnt += s_m + 60 * s_h + 60 * (s_day * 24);
    cout << cnt;

    // Please write your code here.

    return 0;
}