// #include <bits/stdc++.h>
// using namespace std;

// int f(int n,vector <int> &dp){
//    if(n<=1) return n;
//    if(dp[n]!=-1) return dp[n];

//    return dp[n] = f(n-1,dp)+ f(n-2, dp);  
   
// }

// int main(){
//     int n ;
//     cin >> n ;
//     vector <int> dp(n+1,-1);
//     cout << f(n,dp);
//     return 0 ;
// }

// tc & sc = O(n) 


// #include <bits/stdc++.h>
// using namespace std;

// int f(int n,int prev, int prev2){
//    if(n<=1) return n;
//    int curi;
//    for(int i=2;i<=n ; i++){
//      curi= prev + prev2;
//       prev2 = prev;
//       prev=curi;
//    }  
//    return curi;
   
// }

// int main(){
//     int n ;
//     cin >> n ;
//     int prev2=0;
//     int prev=1;
//     cout << f(n,prev,prev2);
//     return 0 ;
// }


#include <bits/stdc++.h>
using namespace std;


int main(){
    int n ;
    cin >> n ;
    if (n<=1) {
        cout << n;
        return 0;}
    int prev2=0;
    int prev=1;
    int curi;
   for(int i=2;i<=n ; i++){
     curi= prev + prev2;
      prev2 = prev;
      prev=curi;
   } 
   cout << curi;
    return 0 ;
}
// tc = O(n) & sc = O(1)