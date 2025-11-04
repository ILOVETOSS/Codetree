#include <iostream>

using namespace std;

int n, m;
int arr[100];



int ptr(int a,int b){
    int cnt = 0;
    for(int j = a; j <= b; j++){
        cnt += arr[j];
    }
    return cnt;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << ptr(a1-1,a2-1) << "\n";

        
    }

    // Please write your code here.

    return 0;
}