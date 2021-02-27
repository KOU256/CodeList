#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<pair<string, int>> array, copy;

    cin >> n;
    array.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i].first >> array[i].second;
        array[i].second *= -1;
    }
    copy = array;
    sort(array.begin(), array.end());

    for (int k = 0; k < array.size(); k++) {
        int m = 0;
        while (copy[m] != array[k]) {
            m++;
        }
        cout << m + 1 << endl;
    }
    return 0;
}
