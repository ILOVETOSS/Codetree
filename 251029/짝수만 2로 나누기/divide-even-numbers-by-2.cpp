#include <iostream>
using namespace std;

int n;
int arr[50];

void ptr(int *x){
    for(int j = 0; j <= n; j++){
        if(x[j] % 2 == 0){
            x[j] /= 2;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ptr(arr);

    for(int p = 0; p < n; p++){
        cout << arr[p] << " ";
    }
    return 0;
}