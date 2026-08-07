#include <bits/stdc++.h>
using namespace std;

 int largest(int arr[],int n ){
    //1st approach
//     sort(arr,arr+sizeof(arr));
//    return arr[sizeof(arr)-1];

   //2nd approach
   int larg=arr[0];
   for(int i =1;i<sizeof(arr);i++){
      if(larg<arr[i]) larg=arr[i];
   }
   return larg;
}




int slargest(int arr[],int n){
    //1st approach 
    //sort and search from last 
    
    //2nd approach 

    // int larg=arr[0];
    // for(int i=1;i<n;i++){
    //     if(larg<arr[i]) larg=arr[i];   
    // }

    // int sslarg=-1;
    // for(int i =1;i<n;i++){
    //     if(sslarg<arr[i]&&arr[i]!=larg) sslarg=arr[i];
    // }
    // return sslarg;

    //3rd Approach

    int large=arr[0];
    int slarge=INT_MIN;

    for(int i=0;i<n;i++){
        if(large<arr[i]){
            slarge=large;
            large=arr[i];
        }
        else if (large>arr[i]&&slarge<arr[i])
        {
            slarge=arr[i];
        }
    }
    return slarge;
 }





 int smallest(int arr[],int n){
    //1st approach
    sort(arr,arr+n);
    return arr[0]; 


    //  2mt approach
    //  int small=arr[0];
    //  for(int i =1;i<n;i++){
    //     if(small>arr[i]) small=arr[i];
    //  }
    //  return small;




 }



 int ssmallest(int arr[],int n){
    //1st approach 
    // int ssmall=INT_MIN;
    //  sort(arr,arr+n);
    //  for(int i =1;i<n;i++){
    //     if(arr[i]>arr[0]){
    //         ssmall=arr[i];
    //         break;
    //     }

    //  }
  //tm: O(nlogn+n)

  //2nd approach 
//    int small=arr[0];
//    int ssmall=INT_MAX;
   
//    for(int i =1;i<n;i++){
//     if(arr[i]<small) small=arr[i];
//    }

//    for(int i=0;i<n;i++){
//     if(ssmall>arr[i]&&arr[i]>small){
//         ssmall=arr[i];
//     }
// }
// return ssmall;

// tm:(2n)

//3rd approach

int small=arr[0];
int ssmall =INT_MAX;

for(int i=1;i<n;i++){
    if(small>arr[i]){
        ssmall=small;
        small=arr[i];
    }else if (arr[i]>small&&arr[i]<ssmall){
        ssmall=arr[i];
    }
    
}
return ssmall;


 }



     bool checkSorted( int arr[],int n){
            for(int i=1;i<n;i++){
                if(arr[i-1]>arr[i]){
                    return false;
                }
                    
            }
          return true;
     }











int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i =0;i<n;i++){
       cin >> arr[i];
    }
    cout << endl;
    
    for (auto x :arr){
        cout << x << " ";
    }
    cout << endl;

    // cout << largest(arr,n);
    // cout << slargest(arr,n);
    // cout << smallest(arr,n);
    // cout << ssmallest(arr,n);
    cout << boolalpha << checkSorted(arr,n);


}