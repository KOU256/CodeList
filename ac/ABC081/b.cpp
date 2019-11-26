#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char **argv) {
    int n;
    int res = 500000000;
    vector<int> a;

    cin >> n;
    a.resize(n);
    for (auto&& i : a) {
        cin >> i;
    }

    for (auto&& i : a) {
        int count = 0;
        while(i % 2 ==0) {
            i /= 2;
            count++;
        }

        if (res > count) {
            res = count;
        }
    }

    cout << res << endl;

    return 0;
}