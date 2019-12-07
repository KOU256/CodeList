#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    string s;

    cin >> s;

    string t = s;
    for (auto i = t.begin(); i != t.end(); i++) {
        for (auto j = min_element(i, t.end()); j != t.end(); j++) {
            if (*i > *j) {
                swap(i, j);
                int count = 0;
                for (auto m = 0; m < n; m++) {
                    if (t[m] != s[m]) {
                        count++;
                    }
                }
                if (count <= k) {

                }
            }
        }
    }

    for(int i = 0; i < N; i++){
        //ans[i]を確定させる
        int l = i;
        for(int j = i+1; j < N; j++){
            if( ans[l] > ans[j]){
                string tmp = ans;
                swap(tmp[i],tmp[j]);
                int diff = 0;
                for(int k = 0; k < N; k++){
                    if(tmp[k] != S[k]){ diff++;}}

                if( diff <= K){ l = j;}
            }
        }
        swap(ans[i],ans[l]);
    }

    return 0;
}