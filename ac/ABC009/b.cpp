#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;

    cin >> n;

    set<int> a;

    for (auto i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }

    cout << *(--(--a.end())) << endl;

    return 0;
}