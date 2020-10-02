#include <bits/stdc++.h>

class Circle {
public:
    void solve(std::istream& in, std::ostream& out) {
        double r;
        in >> r;

        out << std::fixed << std::setprecision(6);
        out << r * r * M_PI << ' ' << 2 * r * M_PI << std::endl;

    }
};
