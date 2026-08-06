#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void f(int r,
           int n,
           vector<string>& board,
           vector<vector<int>>& attack,
           vector<vector<string>>& ans)
    {
        if (r == n)
        {
            ans.push_back(board);
            return;
        }

        for (int c = 0; c < n; c++)
        {
            if (attack[r][c] != 0) continue;

            board[r][c] = 'Q';

            // mark
            for (int i = r + 1; i < n; i++)
                attack[i][c]++;

            for (int i = 1; r + i < n && c + i < n; i++)
                attack[r + i][c + i]++;

            for (int i = 1; r + i < n && c - i >= 0; i++)
                attack[r + i][c - i]++;

            f(r + 1, n, board, attack, ans);

            // unmark
            for (int i = r + 1; i < n; i++)
                attack[i][c]--;

            for (int i = 1; r + i < n && c + i < n; i++)
                attack[r + i][c + i]--;

            for (int i = 1; r + i < n && c - i >= 0; i++)
                attack[r + i][c - i]--;

            board[r][c] = '.';
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> board(n, string(n, '.'));
        vector<vector<int>> attack(n, vector<int>(n, 0));
        vector<vector<string>> ans;

        f(0, n, board, attack, ans);

        return ans;
    }
};