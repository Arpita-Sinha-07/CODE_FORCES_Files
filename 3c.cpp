#include <bits/stdc++.h>
using namespace std;

bool win(vector<string>& g, char c) {
    for (int i = 0; i < 3; i++) {
        if (g[i][0] == c && g[i][1] == c && g[i][2] == c)
            return true;
        if (g[0][i] == c && g[1][i] == c && g[2][i] == c)
            return true;
    }

    if (g[0][0] == c && g[1][1] == c && g[2][2] == c)
        return true;

    if (g[0][2] == c && g[1][1] == c && g[2][0] == c)
        return true;

    return false;
}

int main() {
    vector<string> g(3);

    for (int i = 0; i < 3; i++)
        cin >> g[i];

    int cntX = 0, cntO = 0, empty = 0;

    for (auto &row : g) {
        for (char ch : row) {
            if (ch == 'X') cntX++;
            else if (ch == '0') cntO++;
            else empty++;
        }
    }

    bool xWin = win(g, 'X');
    bool oWin = win(g, '0');

    if (!(cntX == cntO || cntX == cntO + 1)) {
        cout << "illegal";
    }
    else if (xWin && oWin) {
        cout << "illegal";
    }
    else if (xWin) {
        if (cntX == cntO + 1)
            cout << "the first player won";
        else
            cout << "illegal";
    }
    else if (oWin) {
        if (cntX == cntO)
            cout << "the second player won";
        else
            cout << "illegal";
    }
    else {
        if (cntX + cntO == 9)
            cout << "draw";
        else if (cntX == cntO)
            cout << "first";
        else
            cout << "second";
    }

    return 0;
}