#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ans(n, 0);

    int p;
    cin >> p;
    vector<int> arr1(p);
    for (int i = 0; i < p; i++) {
        cin >> arr1[i];
        ans[arr1[i] - 1] = 1;
    }

    int q;
    cin >> q;
    vector<int> arr2(q);
    for (int i = 0; i < q; i++) {
        cin >> arr2[i];
        ans[arr2[i] - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (ans[i] == 0) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
    return 0;
}
