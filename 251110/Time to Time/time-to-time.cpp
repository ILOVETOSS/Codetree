#include <iostream>

using namespace std;

int a, b, c, d;


int main() {
    int time = 0;
    cin >> a >> b >> c >> d;

    while(true){
        if(a == c && b == d){
            break;
        }

        time++;
        b++;
        if(b == 60){
            a++;
            b = 0;
        }

    }
    cout << time;

    // Please write your code here.

    return 0;
}