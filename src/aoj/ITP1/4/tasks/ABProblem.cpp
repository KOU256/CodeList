#include <bits/stdc++.h>

class ABProblem {
public:
    void solve(std::istream& in, std::ostream& out) {
        int a, b;
        in >> a >> b;

        int d = a / b, r = a % b;
        double f = (double)a / (double)b;

        out << d << ' ' << r << ' ' << std::fixed << std::setprecision(5) << f << std::endl;
    }
};
