#include<iostream>
#include<string>
#include<limits>

#define DREAM_LENGTH 5
#define DREAMER_LENGTH 7
#define ERASE_LENGTH 5
#define ERASER_LENGTH 6

using namespace std;

int main(int argc, char **argv){
    string s;

    cin >> s;

    while (s.length() >= DREAM_LENGTH) {
        if (s.find("eraser") != string::npos)
            s.erase(s.find("eraser"), ERASER_LENGTH);
        else if (s.find("erase") != string::npos)
            s.erase(s.find("erase"), ERASE_LENGTH);
        else if (s.find("dreamer") != string::npos)
            s.erase(s.find("dreamer"), DREAMER_LENGTH);
        else if (s.find("dream") != string::npos)
            s.erase(s.find("dream"), DREAM_LENGTH);
    }

    if (s.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}