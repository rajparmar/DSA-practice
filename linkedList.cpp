#include <bits/stdc++.h>
using namespace std;


  struct node{
       int val;
       node* next;
       node(){
         val=NULL;
         next=nullptr;
       }
       node(int k){
         val=k;
         next=nullptr;
       }
       node(int k,node* p){
         val=k;
         next=p;
       }
  };

   node* removekth(node* head,int k){
      if(head==NULL||head->next==nullptr) return nullptr;
      if(k==1){
        node*temp = head;
        head=head->next;
        delete(temp);
      }else if(k>1){
        node* temp= head;
        node* prev=nullptr;
        int cnt=1;
        while(temp){
            
            
            if(cnt==k){
                prev->next = prev->next->next;
                delete(temp);
                return head;
            }
            prev=temp;
            temp=temp->next;
            
            cnt++;
   
        }
        return head;

      }
      

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
        while(cnt<k-1){
          temp=temp->next; 
        }
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

    // Array to LL 
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    } 
    int k;
    cin>> k;
    int val;
    cin>> val;


    //deletion 
    // head = removekth(head,k) ;
    // head = removenum(head,k); 

    //insertion 
    head=insertatk(head,k,val);

    //printing the LL
    node*temp= head;
    while(temp){
        cout << temp->val << " ";
        temp=temp->next;
    }


    return 0;
}