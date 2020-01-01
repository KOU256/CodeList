#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;

    cin >> s >> t;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            if (s[i] == '@') {
                if (t[i] != 'a' && t[i] != 't' && t[i] != 'c' && t[i] != 'o' && 
                    t[i] != 'd' && t[i] != 'e' && t[i] != 'r' ) {
                    cout << "You will lose" << endl;

                    return 0;
                }
            }
            else if (t[i] == '@') {
                if (s[i] != 'a' && s[i] != 't' && s[i] != 'c' && s[i] != 'o' &&
                    s[i] != 'd' && s[i] != 'e' && s[i] != 'r' ) {
                    cout << "You will lose" << endl;

                    return 0;
                }
            }
            else {
                cout << "You will lose" << endl;

                return 0;
            }
        }
    }
    cout << "You can win" << endl;

    return 0;
}