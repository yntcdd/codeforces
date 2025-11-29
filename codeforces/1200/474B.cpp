#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int length = 0;
    int a[n] = {};
    for (int i = 0; i < n; i++){
        cin >> a[i];
        length += a[i];
    }

    int nums[length] = {};
    
    int group = 0;
    int numnow = 1;
    for (int i = 0; i < length; i++) {
        nums[i] = group + 1;
        if (numnow == a[group]) {
            numnow = 0;
            group++;
        }
        numnow++;
    }
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cout << nums[x - 1] << endl;
    }
    return 0;
}