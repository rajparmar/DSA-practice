#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, inp , fren ; 
    cin >> n;
    vector <int> vec;
    for (int i=0; i<n;i++){
        cin >> inp;
        vec.emplace_back(inp);
    }
    
    // precomputing 
    vector <int> hash(13,0);
    for (int i=0; i<n; i++){
       hash[vec[i]]++;
    }

   cin >> fren;
   int inputnum[fren];
    for (int i =0 ; i<fren; i++){
        cin >> inputnum[i];
        
    }
    for (int i =0 ; i<fren; i++){
        cout << inputnum[i] << "-->" << hash[inputnum[i]] << endl;
    
    }






    return 0;
}