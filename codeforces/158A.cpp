#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int k;
    
    cin >> n >> k;
    
    int passes = 0;
    int values[n];
    
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    
    int pass = values[k - 1];
    
    for (int i = 0; i < n; i++) {
        if (values[i] >= pass && values[i] > 0) {
            passes += 1;            
        }
    }
    
    cout << passes;
    
    return 0;
}