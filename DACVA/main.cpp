#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(int argc, char **argv) {
    int n, mini, ans;
    int sum = 0;
    double ave;
    vector<double> a;

    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ave = (double)sum / (double)n;
    mini = ave;

    for (int j = 0; j < n; j++) {
        if ( abs(ave - a[j]) < mini) {
            ans = j;
            mini = abs(ave - a[j]);
        }
    }

    cout << ans << endl;

    return 0;
}