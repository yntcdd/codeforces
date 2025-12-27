#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n] = {};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int first = -1;
    int last = -1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            first = i;
            break;
        }
    }

    if (first == -1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    last = first;
    while (last + 1 < n && a[last] > a[last + 1]) {
        last++;
    }

    reverse(a + first, a + last + 1);

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n" << first + 1 << " " << last + 1 << "\n";
    return 0;
}
