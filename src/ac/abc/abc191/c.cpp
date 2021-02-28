#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int h, w;
    scanf("%d %d", &h, &w);
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }

    int ans = 0;
    for (int i = 0; i < h - 1; i++) {
        for (int j = 0; j < w - 1; j++) {
            int c = 0;
            for (int m = 0; m < 2; m++) {
                for (int n = 0; n < 2; n++) {
                    if (s[i + m][j + n] == '#') {
                        c++;
                    }
                }
            }
            if (c % 2 == 1) {
                ans++;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
