#include<iostream>
#include<string>

using namespace std;

int main(int argc, char **argv){
    string s;

    cin >> s;

    while(s.length() > 5) {
        if (s.find("eraser") != -1) {
            s.erase(s.begin(), s.begin() + 5);
        }
        else if (s.find("erase") != -1) {
            s.erase(s.begin(), s.begin() + 4);
        }
        else if (s.find("dreamer") != -1) {
            s.erase(s.begin(), s.begin() + 6);
        }
        else if (s.find("dream") != -1) {
            s.erase(s.begin(), s.begin() + 4);
        };
    }

    if (s.empty()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}