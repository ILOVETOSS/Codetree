#include <iostream>

using namespace std;

int n;
int arr[50];

void ptr(int &x){
    for(int j = 0; j <= n; j++){
        if(arr[j] < 0){
            arr[j] = arr[j] * -1;
        }
    }
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ptr(*arr);

    for(int p = 0; p < n; p++){
        cout << arr[p] << " ";
    }

    // Please write your code here.

    return 0;
}