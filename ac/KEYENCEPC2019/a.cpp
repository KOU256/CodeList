#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;
    bool first = false, second = false, third = false, fourth = false;

    cin >> n1 >> n2 >> n3 >> n4;

    if (!first) {
        if (n1 == 1) first = true;
        else if (n2 == 1) first = true;
        else if (n3 == 1) first = true;
        else if (n4 == 1) first = true;

        if (!second) {
            if (n1 == 9) second = true;
            else if (n2 == 9) second = true;
            else if (n3 == 9) second = true;
            else if (n4 == 9) second = true;

            if (!third) {
                if (n1 == 7) third = true;
                else if (n2 == 7) third = true;
                else if (n3 == 7) third = true;
                else if (n4 == 7) third = true;

                if (!fourth) {
                    if (n1 == 4) fourth = true;
                    else if (n2 == 4) fourth = true;
                    else if (n3 == 4) fourth = true;
                    else if (n4 == 4) fourth = true;
                }
            }
        }
    }

    if (first && second && third && fourth) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}