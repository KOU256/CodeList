#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    if (s.back() == 'T') {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}