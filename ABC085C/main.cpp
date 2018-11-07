#include<iostream>

#define X 10000
#define Y 5000
#define Z 1000

using namespace std;

int main(int argc, char **argv) {
    int n, y;
    int count[3] = {-1, -1, -1};

    cin >> n >> y;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                if (i + j + k == n && i * X + j * Y + k * Z == y) {
                    count[0] = i;
                    count[1] = j;
                    count[2] = k;
                    goto End;
                }
            }
        }
    }

End:
    cout << count[0] << ' ' << count[1] << ' ' << count[2] << endl;
    return 0;
}