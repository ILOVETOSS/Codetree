#include <iostream>
#include <algorithm>
using namespace std;


int x1[100], x2[100];
int arr[100] = {};
int a,b;
int main() {
    cin >> a >> b;

    for (int i = 1; i <= b; i++) {
        cin >> x1[i] >> x2[i];
    }
    for(int i = 1; i <= b; i++){
        for(int j = x1[i]; j <= x2[i]; j++){
            arr[j]++;
        }
    }
    int mx = 0;
    for(int i = 1; i <= b; i++){
        mx = max(mx,arr[i]);
    }
    cout << mx;
    // Please write your code here.

    return 0;
}