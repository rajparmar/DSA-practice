#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int > a ={1,2,3};
    deque <int> b;
    for(int i=0;!a.empty();i++){
        b.push_front(a.back());
        a.pop_back();
    }
    for(auto x :b){
        cout << x;
    }


//     int a=2;
//     int b=3;
//    swap(a,b);
//     cout << a<< b ;
    return 0;
}