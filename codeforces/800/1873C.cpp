#include <iostream>

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int points = 0;
        for (int rows = 0; rows < 10; rows++) {
            for (int columns = 0; columns < 10; columns++) {
                char x;
                cin >> x;

                if (x == 'X') {
                    if (rows == 0 || rows == 9) {
                        points += 1;
                    } else if (rows == 1 || rows == 8) {
                        if (columns == 0 || columns == 9) {
                            points += 1;
                        } else {
                            points += 2;
                        }
                    } else if (rows == 2 || rows == 7) {
                        if (columns == 0 || columns == 9) {
                            points += 1;
                        } else if (columns == 1 || columns == 8){
                            points += 2;
                        } else {
                            points += 3;
                        }
                    } else if (rows == 3 || rows == 6) {
                        if (columns == 0 || columns == 9) {
                            points += 1;
                        } else if (columns == 1 || columns == 8){
                            points += 2;
                        } else if (columns == 2 || columns == 7){ 
                            points += 3;
                        } else {
                            points += 4;
                        }
                    } else if (rows == 4 || rows == 5) {
                        if (columns == 0 || columns == 9) {
                            points += 1;
                        } else if (columns == 1 || columns == 8){
                            points += 2;
                        } else if (columns == 2 || columns == 7){ 
                            points += 3;
                        } else if (columns == 3 || columns == 6){
                            points += 4;
                        } else {
                            points += 5;
                        }
                    }
                }
            }
        }        
        cout << points << endl;
    }

    return 0;
}