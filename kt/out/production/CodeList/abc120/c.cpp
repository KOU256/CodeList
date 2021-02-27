#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    int count = 0;
    string s;

    cin >> s;

    int i = 0;
    while (true) {
        if (i > s.size() - 1 || s.empty()) {
            break;
        }

        if (s[i] == '0' && s[i + 1] == '1' || s[i] == '1' && s[i + 1] == '0') {
            s.erase(s.begin() + i + 1);
            s.erase(s.begin() + i);
            count += 2;
            if (i != 0) {
                i--;
            }
        }
        else {
            i++;
        }
    }

    cout << count << endl;

    return 0;
}