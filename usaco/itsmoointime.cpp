#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, k;
    if (cin >> T >> k) {
        while (T--) {
            int N;
            cin >> N;
            string S;
            cin >> S;

            cout << "YES" << "\n";

            if (k == 1) {
                string result = "";
                bool flipped = false;

                for (int i = N - 1; i >= 0; --i) {
                    char current = S[i];
                    char logicalChar;

                    if (!flipped) {
                        logicalChar = current;
                    } else {
                        logicalChar = (current == 'M' ? 'O' : 'M');
                    }

                    if (logicalChar == 'M') {
                        result += 'M';
                    } else {
                        result += 'O';
                        flipped = !flipped;
                    }
                }

                reverse(result.begin(), result.end());
                cout << result << "\n";
            }
        }
    }
    return 0;
}