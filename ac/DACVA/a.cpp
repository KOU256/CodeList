#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(int argc, char **argv) {
    int n, ans;
    double min;
    double ave = 0;
    vector<double> a;

    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ave += a[i];
    }
    ave /= (double)n;
    min = ave;

    for (int j = 0; j < n; j++) {
        a[j] = fabs(a[j] - ave);
        if (a[j] < min) {
            ans = j;
            min = a[j];
        }
    }

    cout << ans << endl;

    return 0;
}