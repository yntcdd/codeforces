#include <iostream>
#include <string>
#include <cmath>

using namespace std;
typedef long long ll;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;

        ll sum = 0;

        int zeros = 0;
        int ones = 0;

        ll p[n] = {};
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            sum += p[i];
            if (s[i] == '0') {
                zeros++;
            } else {
                ones++;
            }
        }

        int winners = 0;
        int winner;
        int changes = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                winners++;
            } else {
                winners--;
            }

            if (abs(winners) != i + 1) {
                winners = 2;
                changes = 1;
                break;
            }
        }

        if (abs(winners) == n && changes == 0) {
            winners = 1;
            if (s[0] == '1') {
                winner = 1;
            } else {
                winner = 0;
            }
        }

        if (sum > x + y) {
            cout << "NO" << endl;
        } else {
            if (winners == 1) {
                ll need = 0;
                for (int i = 0; i < n; i++) {
                    need += p[i]/2 + 1;
                }
                if (winner == 0) {
                    if (x < need || x < y + n) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                } else {
                    if (y < need || y < x + n) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                }
            } else {
                if (x < zeros || y < ones) {
                    cout << "NO" << endl;
                } else {
                    ll need0 = 0;
                    ll need1 = 0;

                    for (int i = 0; i < n; i++) {
                        if (s[i] == '0') {
                            need0 += p[i] / 2 + 1;
                        } else {
                            need1 += p[i] / 2 + 1;
                        }
                    }

                    if (x >= need0 && y >= need1) {
                        cout << "YES" << endl;
                    } else {
                        cout << "NO" << endl;
                    }
                }
            }
        }
    }

    return 0;
}