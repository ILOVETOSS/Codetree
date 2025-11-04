#include <iostream>

using namespace std;

int n;
void f(int x){
    if(x == 0){
        return;
    }
    f(x-1);
    for(int i = 0; i < x; i++){
        cout << "*";
    }
    cout << "\n";

}

int main() {
    cin >> n;
    f(n);

    // Please write your code here.

    return 0;
}