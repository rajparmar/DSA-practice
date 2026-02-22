#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int j, i;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (j = 0; j < 2 * n - 1 - 2 * i; j++)
        {
            cout << "*";
        }
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern1(int n)
{
    int i, j;

    for (i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void pattern2(int n)
{
    int i, j,num;
    for (i = 0; i < n; i++)
    {
        if (i%2==0){
            num=1 ;
        }
        else num=0 ;

        for (j=0 ;j<=i;j++)
        {
            
            cout << num <<" ";

            // if (num==1)
            // {num=0;}
            // else if(num==0)
            // {num=1;} 
            num = 1 -num ;
   
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    int i, j,num;
    for (i = 1; i <= n; i++)
    {
       num =1;  

        for (j=1 ;j<=i;j++)
        {
            cout << num ;
            num ++;
           
   
        }
        num--;
        for (j=1 ;j<=2*n-2*i;j++)
        {
            cout << " ";
           
   
        }
        for (j=1 ;j<=i;j++)
        {
            cout << num ;
           num --;
   
        }
        cout << endl;
    }
}
void pattern4(int n )
 {
  int i, j, num=1 ;
  for (i =1;i<=n; i++)
  {
    for (j =1;j<=i; j++)
  {
    cout << num << " ";
    num++;
  }
  cout << endl;

  }


 }
void pattern5 (int n )
{
  for (int i=1; i<=n;i++)
  {
    
    for( char j='A'; j<'A'+n-i+1;j++)
    {
        cout << j ;
    }
    cout << endl;
  }



}
void pattern17 (int n )
{
    
  for (int i=1; i<=n;i++)
  {
     char a='A';
    // for spaces 
    for (int j=1 ;j<=n-i;j++)
    {
        cout << " ";
    }
    //for letters 
    for( int j=1; j<i;j++)
    {
        cout << a ;
        a++;
    }
   
    for( int j=1; j<=i;j++)
    {
        
        cout << a ;
        a--;
    }
    
     for (int j=1 ;j<=n-i;j++)
    {
        cout << " ";
    }
    cout << endl;
  }



}
void pattern7 (int n )
{
    int i,j;
    char c;
    for ( i=1;i<=n;i++)
    { 
        c='A'+ n-i;
        for (j=1;j<=i;j++ )
        {
            cout <<c ;
            c++; 
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    int i, j;

    for (i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void pattern9(int n){
    for (int i=1;i<=2*n;i++)
    {

        int star,space;
        if (i<=n){
            star=n-i+1;
            space=2*i-2;
        }
        else {
            star=i-n;
            space=4*n-2*i;
        }
        //for stars
        for(int j=1;j<=star;j++)
        cout << "*";
        //for spaces
        for (int j=1;j<=space;j++)
        cout <<" ";


       
        //for stars
        for(int j=1;j<=star;j++)
        {cout << "*";}

        cout << endl;
    }




}
void pattern10(int n){
    for (int i=1;i<=2*n;i++)
    {

        int star,space;
        if (i<=n){
            star=i;
            space=2*n-2*i;
        }
        else {
            star=2*n-i+1;
            space=2*i-2*n-2;
        }
        //for stars
        for(int j=1;j<=star;j++)
        cout << "*";
        //for spaces
        for (int j=1;j<=space;j++)
        cout <<" ";


       
        //for stars
        for(int j=1;j<=star;j++)
        {cout << "*";}

        cout << endl;
    }




}
void pattern11(int n){
    for (int i=1;i<2*n;i++)
    {

        int star,space;
        if (i<=n){
            star=i;
            space=2*n-2*i;
        }
        else {
            star=2*n-i;
            space=2*i-2*n;
        }
        //for stars
        for(int j=1;j<=star;j++)
        cout << "*";
        //for spaces
        for (int j=1;j<=space;j++)
        cout <<" ";


       
        //for stars
        for(int j=1;j<=star;j++)
        {cout << "*";}

        cout << endl;
    }
}
    void Pattern21(int m, int n) {
   for (int i=0;i<m;i++){
      for (int j=0;j<n;j++){
          if (i==0||j==0||i==m-1||j==n-1){
              cout << "*";
          }
          else cout << " ";

    }
    cout << endl;
    }
 }
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for (int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = 2*n-2-j;
            int down = 2*n-2-i;

            int dis= min(min(top,down),min(right,left));
            cout << n-dis << " " ;
        }
        cout << endl;
    }
}
    





int main()
{
    int n;
    cin >> n;

    pattern(n);
}