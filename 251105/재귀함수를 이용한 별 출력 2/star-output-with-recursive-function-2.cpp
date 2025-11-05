#include <iostream>

using namespace std;

int n;


void f(int m)
{
    if(m == 0){
        return;
    }

    for(int i = 1; i <= m; i++){
        cout << "*" << " ";
    }
    cout << "\n";
    f(m-1);
    for(int j =1; j <= m; j++){
        cout << "*" << " ";
    }
    cout << "\n";

}
int main() {
    cin >> n;
    f(n);
    // Please write your code here.

    return 0;
}