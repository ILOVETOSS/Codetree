#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }

    for(int j = 1; j < n; j++){
        for(int p = 0; p <= j; p++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}