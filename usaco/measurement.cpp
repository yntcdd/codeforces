#include <bits/stdc++.h>
using namespace std;

struct Event {
    int day;
    string name;
    int change;
};

int main() {

    ifstream cin("measurement.in");
    ofstream cout("measurement.out");

    int N;
    cin >> N;

    vector<Event> events(N);

    for (int i = 0; i < N; i++) {
        int d, val;
        string cow;
        char sign;

        cin >> d >> cow >> sign >> val;

        if (sign == '-') val = -val;

        events[i] = {d, cow, val};
    }

    // sort by day
    sort(events.begin(), events.end(), [](Event a, Event b) {
        return a.day < b.day;
    });

    // initial milk values
    map<string, int> milk;
    milk["Bessie"] = 7;
    milk["Elsie"] = 7;
    milk["Mildred"] = 7;

    // get leaders
    auto getLeaders = [&](void) {
        int mx = max({milk["Bessie"], milk["Elsie"], milk["Mildred"]});
        set<string> leaders;
        for (auto &p : milk) {
            if (p.second == mx) leaders.insert(p.first);
        }
        return leaders;
    };

    set<string> current = getLeaders();
    int answer = 0;

    for (auto &e : events) {
        set<string> before = current;

        milk[e.name] += e.change;

        current = getLeaders();

        if (current != before) {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}