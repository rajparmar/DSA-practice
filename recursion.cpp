#include <bits/stdc++.h>
using namespace std ;

int k=0;
int cnt=0;

void func(){
    if(k==6) return;
    cout << k << " ";
    k++ ;
    func();

}
void printname(string name,int n){
    

    if (cnt>=n){
        return ;

    }
    else {
        cout << name << " ";
        cnt++;    
        printname(name,n);
    
    }
}
void printnumbers(int n){
    

    if (cnt==n){
        return ;

    }
    else {
        cout << cnt+1 << " ";
        cnt++;    
        printnumbers(n);
    
    }
}
void printnumbers2(int i){
    // without global variable

    if (i==0){
        return ;

    }
    else {
        cout << i << " ";
      
        printnumbers2(i-1);
    
    }
}
void backtracknum(int i,int n){
    
    if (i<n) return;
    else {
        backtracknum(i-1,n);
        cout << i  << " ";
    }
    
}
void recsum(int n,int sum){
    if(n==0){
        cout << sum << "";
        return;
    
    }
    else{
        recsum(n-1,sum+n);
    }
}
int recursionsum(int n){
    if(n<=0) return 0;
    else {
        k= k+ n;
        recursionsum(n-1);
    }
    return k;

}
int recursionsum1(int n){
    if(n<=0) return 0;
    else {
        
       return n+ recursionsum(n-1);
    }
    

}
int recfactorial(int n){
    if(n<=0) return 1;
    else {
        
       return n*recfactorial(n-1);
    }
    

}
int f=1;
void recfactorial1(int n){
    if(n<=0){ 
        cout << f; 
       return ;}
    else {
        f = f*n;
        recfactorial1(n-1);
    }
    cout << endl << "something has to be commited";
    

}

void recrevarr( int i,int arr[],int n){
    if (i==sizeof(arr)/2){
        return;
    }
     
    swap(arr[i],arr[n-i-1]);
    recrevarr(i+1,arr,n);

}

int main(){
    string name ;
    int n;
    // cout <<  "enter the name " << endl ;
    // cin >> name ;
    // cout << "Enter the how many times it should be printed "<< endl;
    cin  >> n ; 
    // recsum(n,0);
    // recfactorial1(n);
    int arr[n];
    for (int i=0; i<n;i++){
        cin >> arr[i] ;
    }
    recrevarr(0,arr,n);
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
        
    }
 cout << "hey there , github";


 return 0;
}