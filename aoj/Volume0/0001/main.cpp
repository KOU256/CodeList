#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
    int mountain[10];

    for (int i = 0; i < 10; i++) {
        cin >> mountain[i];
    }

    sort(mountain, mountain + 10, greater<int>());
    
    for (int j = 0; j < 3; j++) {
        cout << mountain[j] << endl;
    }

    return 0;
}
