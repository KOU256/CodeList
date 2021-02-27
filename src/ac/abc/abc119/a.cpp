#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string s;

    cin >> s;

    s.erase(s.begin() + 4);
    s.erase(s.begin() + 6);

    if (stol(s) <= 20190430) {
        cout << "Heisei" << endl;
    }
    else {
        cout << "TBD" << endl;
    }

    return 0;
}