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
    }
    copy = array;
    sort(array.begin(), array.end());

    for (int j = 0;j < array.size() - 1;j++){
        if (array[j].first == array[j + 1].first) {
            int num = 1;
            while (true) {
                if (j + num >= array.size()) {
                    break;
                }
                else if (array[j].first != array[j + num].first) {
                    break;
                }
                num++;
            }
            partial_sort(array.begin() + j, array.begin() + j + num, array.begin() + j + num, greater<pair<string, int>>());
        }
    }

    for (int k = 0; k < array.size(); k++) {
        int m = 0;
        while (copy[m] != array[k]) {
            m++;
        }
        cout << m + 1 << endl;
    }
    return 0;
}
