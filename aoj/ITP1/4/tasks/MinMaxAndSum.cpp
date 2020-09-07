#include <bits/stdc++.h>

class MinMaxAndSum {
public:
    void solve(std::istream& in, std::ostream& out) {
        int n;
        in >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            in >> a[i];
        }

        int min = *std::min_element(a.begin(), a.end());
        int max = *std::max_element(a.begin(), a.end());
        int sum = std::accumulate(a.begin(), a. end(), 0);

        out << min << ' ' << max << ' ' << sum << std::endl;
    }
};
