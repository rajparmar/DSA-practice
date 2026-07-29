// #include <bits/stdc++.h>
// using namespace std;

//  void subsequence( int i , vector <int> a , vector <int> b){
     
//     if (i>=a.size()){
//         cout << "{";
//         for (auto x : b){
//             cout << x << " ";
            
//         } 
//         cout << "}";
//     cout << endl;
//     return ;
//   }
     
//     b.push_back(a[i]) ;
//     subsequence(i+1,a,b);
    
//     b.pop_back();
//     subsequence(i+1,a,b);
    
//      return ;
//  }

// int main (){
//     int n ,inp ;
//     cin >> n ;
//     vector <int> arr;
//     vector <int> sub = {};
//     for (int i =0;i<n;i++){
//         cin>>inp;
//         arr.push_back(inp);
//     }
    
//     subsequence (0, arr, sub);
   
//     return 0 ;
// }

#include <bits/stdc++.h>
using namespace std;

//  void subsequence( int i , vector <int> &a , vector <int> &b){
     
//     if (i>=a.size()){
//         cout << "{";
//         for (auto x : b){
//             cout << x ;
            
//         } 
//         cout << "}";
//     cout << endl;
//     return ;
//   }
     
//     b.push_back(a[i]) ;
//     subsequence(i+1,a,b);
    
//     b.pop_back();
//     subsequence(i+1,a,b);
    
//      return ;
//  }

// int main (){
//     int n ,inp ;
//     cin >> n ;
//     vector <int> arr;
//     vector <int> sub = {};
//     for (int i =0;i<n;i++){
//         cin>>inp;
//         arr.push_back(inp);
//     }
    
//     subsequence (0, arr, sub);
   
//     return 0 ;
// }


void sub(int i , vector <int> &a , vector <int> &b ){
     if(i>=a.size())
     { 
        cout << "{";
        for(auto x : b){
            cout << x << " "; 
        }
        cout << "}" << endl;
        return ;
     }
     sub(i+1 , a , b);

     b.push_back(a[i]);
     sub(i+1, a , b);

     b.pop_back();

     return ;
 
}

int main (){
    int n ,inp ;
    cin  >> n ;
    vector <int> a,b;
    for (int i =0 ; i< n ; i++){
        cin >> inp;
        a.push_back(inp);
    }
 
    sub(0,a,b);

    return 0;
}