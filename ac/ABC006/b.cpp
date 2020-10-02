#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[1000000] = {0};
    array[2] = 1;
    for (int array_i = 3; array_i < n; array_i++) {
        array[array_i] = (array[array_i - 1] + array[array_i - 2] + array[array_i - 3]) % 10007;
    }

    cout << array[n - 1] << endl;

    return 0;
}