#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int num;

    cin >> num;
    int coins[num] = {};

    for (int i = 0; i < num; i++) {
        int coin;
        cin >> coin;

        coins[i] = coin;
    }

    sort(coins, coins + num, greater<int>());

    for (int i = 0; i < num; i++) {
        int sum = 0;
        int sumd = 0;
        for (int j = 0; j <= i; j++) {
            sum += coins[j];
        }
        for (int j = num-1; j > i; j--) {
            sumd += coins[j];
        }
        if (sum > sumd) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}