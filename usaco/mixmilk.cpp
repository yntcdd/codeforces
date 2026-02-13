#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");

    int a_capacity, a_amount;
    int b_capacity, b_amount;
    int c_capacity, c_amount;

    fin >> a_capacity >> a_amount;
    fin >> b_capacity >> b_amount;
    fin >> c_capacity >> c_amount;

    int operation = 1;

    for (int i = 0; i < 100; i++) {
        if (operation == 1) {
            int b_left = b_capacity - b_amount;
            if (b_left >= a_amount) {
                b_amount += a_amount;
                a_amount = 0;
            } else {
                b_amount = b_capacity;
                a_amount -= b_left;
            }
        } 
        else if (operation == 2) {
            int c_left = c_capacity - c_amount;
            if (c_left >= b_amount) {
                c_amount += b_amount;
                b_amount = 0;
            } else {
                c_amount = c_capacity;
                b_amount -= c_left;
            }
        } 
        else {
            int a_left = a_capacity - a_amount;
            if (a_left >= c_amount) {
                a_amount += c_amount;
                c_amount = 0;
            } else {
                a_amount = a_capacity;
                c_amount -= a_left;
            }
        }

        operation++;
        if (operation > 3) operation = 1;
    }

    fout << a_amount << "\n";
    fout << b_amount << "\n";
    fout << c_amount << "\n";

    return 0;
}
