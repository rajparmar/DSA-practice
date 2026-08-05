#include <bits/stdc++.h>
using namespace std;
     void f(vector<int> &b,deque<int>&dq, vector<vector<int>>& ans ){
        if(dq.size()==0) {
            ans.push_back(b);
            return;
            }
      
      for(int i=0;i<dq.size();i++){
          b.push_back(dq[i]);
          dq.erase(dq.begin()+i);
        f(b,dq,ans);
          dq.insert(dq.begin()+i,b.back());
          b.pop_back();
      }
      


     }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> b;
        vector<vector<int>> ans;
        deque<int> dq;
     for(auto x: nums){
         dq.push_back(x);
     }
      f(b,dq,ans);
      return ans;

        
    }
