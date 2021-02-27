#include<iostream>

using namespace std;

int main(int argc, char **argv) {
    int n, a, b, num, sum;
    int sum_total = 0;

    cin >> n >> a >> b;

    for (; n >= 1; n--) {
        num = n;
        sum = 0;

        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum >= a && sum <= b) {
            sum_total += n;
        }
    }

    cout << sum_total << endl;
    return 0;
}