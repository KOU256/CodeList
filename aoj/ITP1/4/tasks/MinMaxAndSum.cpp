#include <bits/stdc++.h>

class MinMaxAndSum {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n;
        in >> n;

        int min = 1000000, max = -1000000;
        long sum = 0;
        for (int i = 0; i < n; i++) {
            int tmp;
            in >> tmp;

            if (tmp < min) {
                min = tmp;
            }
            if (tmp > max) {
                max = tmp;
            }
            sum += tmp;
        }

        out << min << ' ' << max << ' ' << sum << std::endl;
    }
};
