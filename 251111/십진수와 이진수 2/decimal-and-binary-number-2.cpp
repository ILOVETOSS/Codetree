#include <iostream>

using namespace std;

string n;
int num = 0;
int arr[1000] = {};
int cnt;


int main() {
    cin >> n;
    for(int i = 0; i < (int)n.size(); i++){
        num = num * 2 + n[i] - '0';
    }
    
    num = num * 17;

    while(true){
        if(num < 2){
            arr[cnt++] = num;
            break;    
        }
        arr[cnt++] = num % 2;
        num /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << arr[i];
    }
   

    return 0;
}