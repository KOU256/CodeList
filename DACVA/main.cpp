#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char **argv) {
    int n, mini;
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
    for (int j = 0; j < n; j++)
    {
    }

        return 0;
}