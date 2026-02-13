#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll get_pos(ll i, ll t) {
    if (t < 2 * i) return i;

    ll cur_time = 2 * i - 1;
    ll pos = i;
    t -= cur_time;

    while (t >= 0) {
        if (t <= pos) {
            return pos - t;
        }

        t -= pos;
        cur_time += pos;
        pos = 0;

        t -= 1;
        cur_time += 1;
        pos = cur_time / 2;
    }

    return pos;
}

ll at_pos(ll p, ll t) {
    while (true) {
        if (t == 0) return p;

        ll mid = t / 2;

        if (p > mid) {
            return p;
        }
        if (p == mid) {
            p = 0;
            t -= 1;
        } else {
            ll step = max(1LL, (t - 2 * p) / 3);
            p += step;
            t -= step;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    while (Q--) {
        int type;
        ll x, t;
        cin >> type >> x >> t;

        if (type == 1) {
            cout << get_pos(x, t) << "\n";
        } else {
            cout << at_pos(x, t) << "\n";
        }
    }
    return 0;
}
