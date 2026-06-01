#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << 2 * n << " ";

        for (int i = 1; i < n; i++) {
            cout << i;
            
            if (i != n - 1)
                cout << " ";
        }

        cout << "\n";
    }

    return 0;
}