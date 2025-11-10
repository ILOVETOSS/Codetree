#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int t;
int p;
int s;
int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string brr[8] = {"0","Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    
    if(m1 > m2){
         t = arr[m1 - m2];
    }
    else{
       t = arr[m2 - m1];
    }
    if(d1 > d2){
        p = d1 - d2;
    }
    else
    {
        p = d2 - d1;
    }
    s = t + p;
    
    cout << brr[s % 7];
    return 0;
}