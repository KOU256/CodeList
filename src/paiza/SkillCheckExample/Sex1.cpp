#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> f, is_searched;

void dfs(int x, int y, int h, int w) {
    int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};

    if (x < 0 || x >= w || y < 0 || y >= h) {
        return;
    }
    else if (is_searched[y][x]) {
        return;
    }
    is_searched[y][x] = true;

    if (!f[y][x]) {
        return;
    }
    for (int i = 0; i < 4; i++) {
        dfs(x + dx[i], y + dy[i], h, w);
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    f = vector<vector<bool>>(n, vector<bool>(m, false));
    is_searched = vector<vector<bool>>(n, vector<bool>(m, false));
    for (auto & i : f) {
        for (auto && j : i) {
            bool tmp;
            cin >> tmp;
            j = tmp;
        }
    }

    int count = 0;
    for (int i = 0; i < f.size(); i++) {
        for (int j = 0; j < f[i].size(); j++) {
            if (!is_searched[i][j] && f[i][j]) {
                count++;
                dfs(j, i, f.size(), f[i].size());
            }
        }
    }

    cout << count << endl;

    return 0;
}
