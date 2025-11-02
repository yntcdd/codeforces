#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) cin >> nums[i];

    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool turn = true; // true = Sereja's turn, false = Dima's turn

    while (left <= right) {
        int pick;
        if (nums[left] >= nums[right]) {
            pick = nums[left];
            left++;
        } else {
            pick = nums[right];
            right--;
        }

        if (turn)
            sereja += pick;
        else
            dima += pick;

        turn = !turn; // switch turns
    }

    cout << sereja << " " << dima;
    return 0;
}
