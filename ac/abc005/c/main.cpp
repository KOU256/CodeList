#include <iostream>
#include <queue>

using namespace std;

int main() {
    int t, n, m;
    queue<int> a, b;

    cin >> t >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push(tmp);
    }
    cin >> m;
    for (int j = 0; j < m; j++) {
        int tmp;
        cin >> tmp;
        b.push(tmp);
    }

    while (!a.empty() && !b.empty()) {
        if (b.front() - a.front() >= 0 && b.front() - a.front() <= t) {
            b.pop();
        }
        a.pop();
    }

    if (b.empty()) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    
    return 0;
}
