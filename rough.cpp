#include <bits/stdc++.h>
using namespace std;

int main (){
    // vector<int > a ={1,2,3};
int n =4;
     vector<vector<int>> a(n,vector<int>(n,0));
     for( auto x: a){
        for (auto y :x){
            cout << y;
                }
                cout <<endl;
     }

    // swap(a[0],a[0]);

    

    // cout<< a[0];
    // deque <int> b;
    // for(int i=0;!a.empty();i++){
    //     b.push_front(a.back());
    //     a.pop_back();
    // }
    // for(auto x :b){
    //     cout << x ;
    // }

    //  cout<< endl;
    // cout << b[2];




//     int a=2;
//     int b=3;
//    swap(a,b);
//     cout << a<< b ;
    return 0;
}