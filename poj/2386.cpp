#include <iostream>
#include <vector>

using namespace std;

int h, w;
vector<vector<bool>> field;

void dfs(int x, int y) {
    int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};

    field[y][x] = false;

    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k], ny = y + dy[k];

        if (nx >= 0 && nx < w && ny >= 0 && ny < h && field[ny][nx]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> w >> h;
    field = vector<vector<bool>>(h, vector<bool>(w, false));
    for (auto & i : field) {
        for (auto && j : i) {
            bool tmp;
            cin >> tmp;
            j = tmp;
        }
    }

    int count = 0;
    for (auto y = 0; y < (int)field.size(); y++) {
        for (auto x = 0; x < (int)field[y].size(); x++) {
            if (field[y][x]) {
                dfs(x, y);
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
