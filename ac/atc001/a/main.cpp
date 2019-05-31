#include <iostream>

int h, w;
char c[500][500];
bool is_discoverd[500][500] = {false};

void dfs(int x, int y);

int main() {
    std::cin >> h >> w;
    
    int start_x = -1, start_y = -1, goal_x = -1, goal_y = -1;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cin >> c[i][j];
            if (start_x == -1 && start_y == -1) {
                if (c[i][j] == 's') {
                    start_x = j;
                    start_y = i;
                }
            }
            if (goal_x == -1 && goal_y == -1) {
                if (c[i][j]== 'g') {
                    goal_x = j;
                    goal_y = i;
                }
            }
        }
    }

    dfs(start_x, start_y);

    if (is_discoverd[goal_y][goal_x]) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}

void dfs(int x, int y) {
    if (x < 0 || w <= x || y < 0 || h <=  y || c[y][x] == '#') {
        return;
    }
    if (is_discoverd[y][x]) {
        return;
    }

    is_discoverd[y][x] = true;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}