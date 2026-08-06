#include <bits/stdc++.h>
using namespace std;


// class Solution {
// public:
//     void f(int r,
//            int n,
//            vector<string>& board,
//            vector<vector<int>>& attack,
//            vector<vector<string>>& ans)
//     {
//         if (r == n)
//         {
//             ans.push_back(board);
//             return;
//         }

//         for (int c = 0; c < n; c++)
//         {
//             if (attack[r][c] != 0) continue;

//             board[r][c] = 'Q';

//             // mark
//             for (int i = r + 1; i < n; i++)
//                 attack[i][c]++;

//             for (int i = 1; r + i < n && c + i < n; i++)
//                 attack[r + i][c + i]++;

//             for (int i = 1; r + i < n && c - i >= 0; i++)
//                 attack[r + i][c - i]++;

//             f(r + 1, n, board, attack, ans);

//             // unmark
//             for (int i = r + 1; i < n; i++)
//                 attack[i][c]--;

//             for (int i = 1; r + i < n && c + i < n; i++)
//                 attack[r + i][c + i]--;

//             for (int i = 1; r + i < n && c - i >= 0; i++)
//                 attack[r + i][c - i]--;

//             board[r][c] = '.';
//         }
//     }

//     vector<vector<string>> solveNQueens(int n)
//     {
//         vector<string> board(n, string(n, '.'));
//         vector<vector<int>> attack(n, vector<int>(n, 0));
//         vector<vector<string>> ans;

//         f(0, n, board, attack, ans);

//         return ans;
//     }
// };


class Solution {
public:

        void f(int r,int n,vector <vector<int>> &a,vector<string>&b,vector<vector<string>>&ans){
            if(r==n){
                ans.push_back(b);
                return;
            }

            for(int c=0;c<n;c++){
                if(a[r][c]!=0) continue;
                b[r][c]='Q';
                 for(int i=1;r+i<n;i++){
                    a[r+i][c]++;
                 }
                 for(int i=1;r+i<n&&c+i<n;i++){
                    
                    a[r+i][c+i]++;
                 }
                 for(int i=1;r+i<n&&c-i>=0;i++){
                    a[r+i][c-i]++;
                   
                 }
                 f(r+1,n,a,b,ans);
                 for(int i=1;r+i<n;i++){
                    a[r+i][c]--;
                 }
                 for(int i=1;r+i<n&&c+i<n;i++){
                    
                    a[r+i][c+i]--;
                 }
                 for(int i=1;r+i<n&&c-i>=0;i++){
                    a[r+i][c-i]--;
                   
                 }
                b[r][c]='.';


            }
        }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> b(n,string(n,'.'));
        vector<vector<int>> attack(n,vector<int>(n,0));
        f(0,n,attack,b,ans);
        return ans;
        
    }
};