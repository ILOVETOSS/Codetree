#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int n;
int nums[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums,nums+n);
    for(int j = 0; j <= n; j++){
        cout << nums[j];
    }
    sort(nums,nums+n,greater<int>());
    for(int x = 0; x <= n; x++){
        cout << nums[x];
    }
    // Please write your code here.

    return 0;
}
