#include <bits/stdc++.h>
using namespace std;
   
void merge(vector<int> &a,int low, int mid , int high){
    vector <int> k;
    int left =low ;
    int right=mid +1;
      while (left<=mid&&right<=high){
        if(a[left]>a[right]){
            k.push_back(a[right]);

            right++;
        }
        else k.push_back(a[left]);
        left++;

      }
      
      

    
   }
   void mergesort(vector <int> &arr, int low , int high){
     
    if (low>=high){
        return;

     }
    int  mid = floor((low+high)/2);
      
     mergesort(arr,low,mid);
     mergesort(arr,mid+1,high);

     merge(arr,low,mid,high);
   
   }
int main (){
    int n, inp, low , high ;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        arr.push_back(inp);
    }
    
    low =0;
    high=arr.size()-1;
    mergesort(arr,low ,high);
    
    for (int x:arr)
    {
        cout << x << " ";

    }

}