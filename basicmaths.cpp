#include <bits/stdc++.h>
using namespace std;
void checkPalindrome(int n)
{

    int val = n;
    int ans = 0;
    int count = 0;
    while (n > 0)
    {

        ans = ans * 10 + n % 10;
        n /= 10;
        count++;
    }
    if (val == ans)
    {
        cout << "yes" << endl;
    }
    else
        cout << "nope" << endl;
}
void checkArmstrong(int n)
{
    int count = 0;
    int val = n;
    int c = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    double ans = 0;
    while (val > 0)
    {
        int k = val % 10;
        ans += pow(k, count);
        val /= 10;
    }
    

    if (c == ans)
    {
        cout << "yes" << endl;
    }
    else {cout << "no" << endl;}
  cout << c << "  "  << ans << endl;
        
}
void checkDivisors(int n){
    vector<int> ls ;
    
    // for (int i=1; i<=sqrt(n);i++){ better way is below 
    for (int i=1; i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i) ls.push_back(n/i);

            // cout << i <<" " ;
            // if(n/i!=i) cout  << n/i << " ";
        }
        
    }
   sort(ls.begin(),ls.end());
 for (auto it : ls){
    cout << it << " ";
 }

};;
void checkPrime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        cout << n << " is a Prime number ";
    }
    else {
         cout << n << " is a Composite number "<< endl;
         checkDivisors(n);
    }
}
void checkGCD(int n,int m){
    // if ((max(n,m)-min(n,m))>=1){
    //     checkGCD(max(n,m)-min(n,m),min(n,m));
    // }
    int gcd=0;
    for (int i=1; i*i<=min(n,m);i++){
        if(n%i==0){
            if(m%i==0 && i>gcd) gcd=i;
            if (m%(n/i)==0 && (n/i)>gcd) gcd= n/i;
        }
}
   cout << gcd << " ";
}
void checkeuGCD(int n,int m){
    if (min(n,m)==0){
        cout << max(m,n)<< " ";
    }
    else{
        checkeuGCD(max(n,m)%min(n,m),min(n,m));      
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    checkeuGCD(n,m);

    return 0;
}