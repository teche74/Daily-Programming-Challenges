#include<bits/stdc++.h>

using namespace std;

void towerOfHanoi(int n, int source, int target, int auxiliary, int &moves, vector<pair<int, int>> &moveList) {
    if (n == 1) {
        moves++;
        moveList.push_back({source, target});
        return;
    }

    towerOfHanoi(n - 1, source, auxiliary, target, moves, moveList);
    moves++;
    moveList.push_back({source, target});
    towerOfHanoi(n - 1, auxiliary, target, source, moves, moveList);
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> moveList;
    int moves = 0;

    towerOfHanoi(n, 1, 3, 2, moves, moveList);

    cout << moves << "\n";
    for (const auto &move : moveList) {
        cout << move.first << " " << move.second << "\n";
    }

    return 0;
}