#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<vector<char>> f(h, vector<char>(w, '.'));

    for (int i = 0; i < n; i++) {
        int bh, bw, bx;
        cin >> bh >> bw >> bx;

        int y = 0;
        bool is_place = true;
        while (is_place) {
            for (int i = y; i < bh; y++) {
                for (int j = bx; j < bw; j++) {
                    if (f[i][j] == '#') {
                        is_place = false;
                        y--;
                    }
                    else if (i + bh == h - 1) {
                        is_place = false;
                    }
                }
            }

            if (is_place) {
                y++;
            }
        }

        for (int i = y; i < bh; i++) {
            for (int j = bx; j < bx + bw; j++) {
                f[i][j] = '#';
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << f[i][j];
        }
        cout << endl;
    }

    return 0;
}