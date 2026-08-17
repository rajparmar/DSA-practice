#include <bits/stdc++.h>
using namespace std;


  struct node{
       int val;
       node* next;
       node* prev;
       node(){
         val=0;
         next=nullptr;
         prev=nullptr;

       }
       node(int k){
         val=k;
         next=nullptr;
         prev=nullptr;
       }
       node(int k,node* n){
         val=k;
         next=n;
         prev=nullptr;
       }
       node(int k,node* n,node* p){
         val=k;
         next=n;
         prev=p;
       }
  };

  

   node* removekth(node* head,int k){
     if(head==nullptr) return nullptr;
     node* temp =head ;
     if(head->next ==nullptr && k==1){
        return nullptr;
     } 
     else if(k>1){
        int cnt=1;
        while(temp->next!=nullptr){
            if(cnt==k){
               temp->prev->next=temp->next;
               temp->next->prev=temp->prev;
               delete(temp);
               return head;
            }
            temp=temp->next;
            cnt++;
        }
        if(temp->next!=nullptr&&cnt==k){
            temp->prev->next=nullptr;
            delete(temp);
            return head;
        }
     }
     return head;
      
     
   }





   node* removenum(node* head,int k){
      if(head==NULL) return nullptr;
       if(head->next==nullptr&&head->val==k){
        return nullptr;
       }
        
        node* temp= head;
        node* prev=nullptr;
        int cnt=1;
        while(temp){
            
            
            if(temp->val==k){
                if(temp!=head){
                    prev->next = prev->next->next;
                    delete(temp);
                }else{
                    head=head->next;
                    delete(temp);
                    
                }
                return head;
            }
            prev=temp;
            temp=temp->next;
            
            cnt++;
   
        }
        return head;
   }









   node* insertatk(node*head,int k,int val){
     node* newnode=  new node(val);
    if(k==1){
        newnode->next=head;
        head=newnode;
      }
      else{
        node* temp =head;
        int cnt =1;
        while(cnt<k-1&&temp!=nullptr){
          temp=temp->next; 
          cnt++;
        }
        if(temp==nullptr) return head;
        // node* newnode =new node(val,temp->next);
        newnode->next=temp->next;
          temp->next=newnode;
      }
      return head;

   }





int main(){
    vector<int> arr = {1,2,3,4,5,7};
    node* head = new node(arr[0]);
    node* mover = head;

    // Array to DLL 

    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        temp->prev=mover;
        mover->next=temp;
        mover=mover->next;
    } 
    
    //printing the DLL before deletion 

    node*temp= head;
    while(temp){
        cout << temp->val << " ";
        temp=temp->next;
    }

    
    //INPUTS:
    int k;
    cin>> k;
    // int val;
    // cin>> val;


    //deletion 
    head = removekth(head,k) ;
    // head = removenum(head,k); 

    //insertion 
    // head=insertatk(head,k,val);

    //printing the DLL
    node*temp= head;
    while(temp){
        cout << temp->val << " ";
        temp=temp->next;
    }


    return 0;
}