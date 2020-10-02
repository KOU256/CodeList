#include <iostream>
#include <string>

using namespace std;

int main() {
    string c(16, ' ');

    for (int i = 0; i < c.length(); i++) {
        cin >> c[i];
    }

    for (int j = c.length() - 1; j >= 0; j--) {
        cout << c[j];
        if (j % 4 != 0) {
            cout << ' ';
        }
        else {
            cout << endl;
        }
    }
    
    return 0;
}