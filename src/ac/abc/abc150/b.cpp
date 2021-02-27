#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;
    int s_i = 0;
    while(true) {
        s_i = s.find("ABC", s_i);
        if (s_i == string::npos) {
            break;
        }
        else {
            count++;
            s_i += 2;
        }
    }

    cout << count << endl;    

    return 0;
}