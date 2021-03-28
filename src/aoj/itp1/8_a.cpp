#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (auto&& c: s) {
        if (isupper(c)) {
            cout << (char)tolower(c);
        }
        else if (islower(c)) {
            cout << (char)toupper(c);
        }
        else {
            cout << c;
        }
    }
    cout << endl;

    return 0;
}