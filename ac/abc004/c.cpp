#include <iostream>
#include <utility>

using namespace std;

int main() {
    int n;
    int array[6] = {1, 2, 3, 4, 5, 6};

    cin >> n;

    for (int count = 0, i = 0; count < n % 30; count++, i++) {
        if (i == 5) {
            i = 0;
        }
        swap(array[i], array[i + 1]);
    }

    for (int j = 0; j < 6; j++) {
        cout << array[j];
    }
    cout << endl;
    
    return 0;
}
