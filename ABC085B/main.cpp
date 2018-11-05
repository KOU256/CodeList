#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char **argv) {
    int n;
    vector<int> d;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        d.push_back(input);
    }

    sort(d.begin(), d.end());

    for (int j = 0; j < d.size() - 1;) {
        if (d[j] == d[j + 1]) {
            d.erase(d.begin() + j + 1);
        }
        else {
            j++;
        }
    }

    cout << d.size() << endl;

    return 0;
}