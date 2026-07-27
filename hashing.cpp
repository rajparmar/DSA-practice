#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, 
    inp , 
    fren ; 
    string s; 
    cin >> s;
    // cin >> n;
    // vector <int> vec;
    // for (int i=0; i<n;i++){
    //     cin >> inp;
    //     vec.emplace_back(inp);
    // }
    
    // precomputing 
    vector <int> hash(26,0);
    for (int i=0; i<n; i++){
       hash[s[i]-97]++;
    }

   cin >> fren;

   vector <char> chh;
    for (int i =0 ; i<fren; i++){
        cin >> chh[i]; 
    }
    for (int i =0 ; i<fren; i++){

        cout << chh[i] << "-->" << hash[chh[i]-'a'] << endl;
        
    }






    return 0;
}