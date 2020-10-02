#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    if (s.substr(0, 7) == "keyence") {
        cout << "YES" << endl;
        return 0;
    }
    else if (s.substr(0, 6) == "keyenc") {
        if (s.substr(s.length() - 1, 1) == "e") {
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    else if (s.substr(0, 5) == "keyen") {
        if (s.substr(s.length() - 2, 2) == "ce") {
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    else if (s.substr(0, 4) == "keye") {
        if (s.substr(s.length() - 3, 3) == "nce") {
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    else if (s.substr(0, 3) == "key") {
        if (s.substr(s.length() - 4, 4) == "ence") {
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    else if (s.substr(0, 2) == "ke") {
        if (s.substr(s.length() - 5, 5) == "yence") {
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    else if (s.substr(0, 1) == "k") {
        if (s.substr(s.length() - 6, 6) == "eyence") {
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    else {
        cout << "NO" << endl;
        return 0;
    }
}