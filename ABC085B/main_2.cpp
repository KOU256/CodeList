#include<iostream>
#include<set>

using namespace std;

int main(int argc, char **argv) {
    int n;
    set<int> d;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        d.insert(input);
    }

    cout << d.size() << endl;

    return 0;
}