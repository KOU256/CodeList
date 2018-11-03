#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char **argv) {
    int n, input;
    int alice_score = 0, bob_score = 0;
    vector<int> a;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        a.push_back(input);
    }

    sort(a.begin(), a.end());

    for (int j = 0; j < n / 2; j++) {
        alice_score += a.back();
        a.pop_back();
        bob_score += a.back();
        a.pop_back();
    }
    if (a.size() % 2 == 1) {
        alice_score += a.front();
    }

    cout << alice_score - bob_score << endl;

    return 0;
}