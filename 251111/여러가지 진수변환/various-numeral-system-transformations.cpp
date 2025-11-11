#include <iostream>

using namespace std;

int N, B;
int arr[100] = {};
int cnt;
int main() {
    cin >> N >> B;

    while(true){
        if(N < B){
            arr[cnt++] =  N;
            break;
        }

        arr[cnt++] = N % B;
        N /= B;
    }

    
    for(int i = cnt - 1; i >= 0; i--){
        cout << arr[i];
    }

    return 0;
}