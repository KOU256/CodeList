#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int t = 100;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp < t) {
            t = tmp;
        } 
    }

    cout << t << endl;
    
    return 0;
}
