#include <bits/stdc++.h>
using namespace std;
 
 vector<int> leadersOfArray(int n,vector <int> arr){
      
      int maxe=INT_MIN;
      vector<int> ans;
      for(int i=n-1;i>=0;i--){
          if(arr[i]>=maxe){
              ans.push_back(arr[i]);
              maxe=arr[i];
          }

      }
      return ans;
 }



int main (){
    int n;
    cin >> n;
    vector<int> arr(n,-1);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   vector<int> ans = leadersOfArray(n,arr);

   for(auto x: ans){
     cout << x;
   }
   return 0;
}