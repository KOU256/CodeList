#include <bits/stdc++.h>

class SimpleCalculator {
public:
    void solve(std::istream& in, std::ostream& out) {
        int a, b;
        char op;

        while (in >> a >> op >> b) {
            if (op == '?') {
                break;
            }

            switch (op) {
                case '+':
                    out << a + b << std::endl;
                    break;
                case '-':
                    out << a - b << std::endl;
                    break;
                case '*':
                    out << a * b << std::endl;
                    break;
                case '/':
                    out << a / b << std::endl;
                    break;
                default:
                    break;
            }
        }
    }
};
