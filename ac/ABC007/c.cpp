#include <iostream>
#include <queue>

int main() {
    int r, c, sx, sy, gx, gy;
    std::cin >> r >> c >> sy >> sx >> gy >> gx;

    char m[50][50] = {'#'};
    int steps[50][50];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cin >> m[i][j];
            steps[i][j] = -1;
        }
    }

    std::queue<std::pair<int, int>> maze;
    steps[sy - 1][sx - 1] = 0;
    maze.push(std::pair<int, int>(sy - 1, sx - 1));
    while (!maze.empty()) {
        std::pair<int, int> coordinate = maze.front();
        int y = coordinate.first, x = coordinate.second;

        if (y == gy - 1 && x == gx - 1) {
            break;
        }

        if (m[y - 1][x] == '.' && steps[y - 1][x] == -1) {
            maze.push(std::pair<int, int>(y - 1, x));
            steps[y - 1][x] = steps[y][x] + 1;
        }
        if (m[y + 1][x] == '.' && steps[y + 1][x] == -1) {
            maze.push(std::pair<int, int>(y + 1, x));
            steps[y + 1][x] = steps[y][x] + 1;
        }
        if (m[y][x - 1] == '.' && steps[y][x - 1] == -1) {
            maze.push(std::pair<int, int>(y, x - 1));
            steps[y][x - 1] = steps[y][x] + 1;
        }
        if (m[y][x + 1] == '.' && steps[y][x + 1] == -1) {
            maze.push(std::pair<int, int>(y, x + 1));
            steps[y][x + 1] = steps[y][x] + 1;
        }

        maze.pop();
    }

    std::cout << steps[gy - 1][gx - 1] << std::endl;    

    return 0;
}