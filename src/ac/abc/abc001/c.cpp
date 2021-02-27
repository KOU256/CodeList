#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int deg, dis;
    int w[12][1] = {
        {15},
        {93},
        {201},
        {327},
        {477},
        {645},
        {831},
        {1029},
        {1245},
        {1467},
        {1707},
        {1959}};
    const char *dir[17] = {
        "N",
        "NNE",
        "NE",
        "ENE",
        "E",
        "ESE",
        "SE",
        "SSE",
        "S",
        "SSW",
        "SW",
        "WSW",
        "W",
        "WNW",
        "NW",
        "NNW",
        "C"};

    cin >> deg >> dis;
    deg = (deg * 10 + 1125) / 2250;

    for (int i = 12; i > 0; i--)
    {
        if (dis >= w[i - 1][0])
        {
            cout << dir[deg % 16] << ' ' << i << endl;

            return 0;
        }
    }

    cout << dir[16] << ' ' << 0 << endl;

    return 0;
}