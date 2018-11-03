#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool judgeOdd(int num);

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

    if (judgeOdd(a.size())) {
        alice_score += *a.end();
        a.pop_back();
    }

    for (int j = 0; j < a.size() / 2; j++) {
        alice_score += *a.end();
        a.pop_back();
        bob_score += *a.end();
        a.pop_back();
    }

    cout << alice_score - bob_score << endl;
    return 0;
}

bool judgeOdd(int num) {
    if (num % 2 == 1) {
        return true;
    }
    else if (num % 2 == 0) {
        return false;
    }
}