#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> s;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        auto itr = s.find(tmp);
        if (itr == s.end()) {
            s[tmp] = 1;
        }
        else {
            s[tmp]++;
        }
    }

    string key;
    int max = 0;
    for (auto && i : s) {
       if (i.second >= max) {
           max = i.second;
           key = i.first;
       }
    }

    cout << key << endl;

    return 0;
}