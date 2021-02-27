#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> items(n, vector<int>(m));
    vector<multiset<int, greater<>>> compare(m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> items[i][j];
            compare[j].insert(items[i][j]);
        }
    }
    vector<pair<int, int>> score(n);
    for (int i = 0; i < n; ++i) {
        score[i].first = 0;
        score[i].second = i + 1;
        for (int j = 0; j < m; ++j) {
            score[i].first -= (n - distance(compare[j].begin(), compare[j].find(items[i][j])));
        }
    }
    sort(score.begin(), score.end());
    for (const auto& i : score) {
        cout << i.second << endl;
    }

    return 0;
}
