#include <bits/stdc++.h>
using namespace std;
 
int main (){
    // vector <int > v={1,2,3,4,5,6};
    // auto  last =v.back();
    // cout << last ;
     vector<int> arr;
 int x;
 // here you can see what happens when cin >> is used as a condition it yes true until null is passed
    while (cin >> x ){
     arr.push_back(x);
    }

    for (auto it : arr){
        cout << it << endl;
    }



}