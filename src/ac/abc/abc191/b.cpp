#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    scanf("%d %d", &n, &x);

    vector<int> array;
    while (n-- > 0) {
        int a;
        scanf("%d", &a);
        
        if (a != x) {
            array.emplace_back(a);
        }
    }

    for (int i = 0; i < array.size(); i++){
        printf("%d", array[i]);
        if (i < array.size() - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
