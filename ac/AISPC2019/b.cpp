#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a, b;
    int first = 0, second = 0, third = 0, count = 0;
    vector<int> p;

    cin >> n;
    cin >> a >> b;
    p.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int j = 0;j < p.size(); j++) {
        if (p[j] <= a) {
            first++;
        }
        else if(p[j] > b) {
            third++;
        }
        else {
            second++;
        }
    }

    while (first != 0 && second != 0 && third != 0) {
        count++;
        first--;
        second--;
        third--;
    }

    cout << count << endl;

    return 0;
}