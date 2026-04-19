#include <bits/stdc++.h>
using namespace std;

struct Cow {
    int id;
    char dir;
    long long x, y;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<Cow> cows(N);
    for (int i = 0; i < N; i++) {
        cin >> cows[i].dir >> cows[i].x >> cows[i].y;
        cows[i].id = i;
    }

    vector<long long> stopTime(N, LLONG_MAX);

    struct Event {
        long long time;
        int stopper, stopped;
    };

    vector<Event> events;

    for (auto &a : cows) {
        for (auto &b : cows) {
            if (a.dir == 'E' && b.dir == 'N') {
                if (b.x >= a.x && a.y >= b.y) {
                    long long tE = b.x - a.x;
                    long long tN = a.y - b.y;

                    if (tE < tN) {
                        events.push_back({tN, a.id, b.id});
                    } else if (tN < tE) {
                        events.push_back({tE, b.id, a.id});
                    }
                }
            }
        }
    }

    sort(events.begin(), events.end(), [](auto &a, auto &b) {
        return a.time < b.time;
    });

    for (auto &e : events) {
        int stopper = e.stopper;
        int stopped = e.stopped;
        long long t = e.time;

        if (stopTime[stopped] < t) continue;

        if (stopTime[stopper] > t) {
            stopTime[stopped] = t;
        }
    }

    for (int i = 0; i < N; i++) {
        if (stopTime[i] == LLONG_MAX) {
            cout << "Infinity\n";
        } else {
            cout << stopTime[i] << "\n";
        }
    }

    return 0;
}