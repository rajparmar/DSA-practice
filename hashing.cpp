#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, 
    // inp , 
    fren ; 
    string s; 
    cin >> s;
  
    // vector <int> vec;
    // for (int i=0; i<n;i++){
    //     cin >> inp;
    //     vec.emplace_back(inp);
    // }
    
    // precomputing 
    vector <int> hash(256,0);
    for (int i=0; i<s.size(); i++){
       hash[s[i]]++;
    }

   cin >> fren;

   vector <char> chh(fren);
    for (int i =0 ; i<fren; i++){
        cin >> chh[i]; 
    }
    for (int i =0 ; i<fren; i++){

        cout << chh[i] << "-->" << hash[chh[i]] << endl;
        
    }






    return 0;
}