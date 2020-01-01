#include <iostream>
#include <string>

#define BTC_1 380000.0

using namespace std;

int main(int argc, char **argv) {
    int n;
    double sum = 0;
    double x;
    string u;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> u;

        if (u == "JPY") {
            sum += x;
        }
        else if (u == "BTC") {
            sum += x * BTC_1;
        }
    }

    cout << sum << endl;

    return 0;
}