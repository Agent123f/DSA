#include<iostream>
#include<vector>
using namespace std ;

class node{
    public:
    int val;
    node* next;
   
    node(int data){
        val=data;
        next=NULL;
       
    }

};
class Quees{
    node* head ;
    node* tail;
    public:
    Quees(){
        head=tail=NULL;
    }
    //Insert data at beigining
     void enquee(int data){
        node* newNode = new node(data);
      if(isempty()){
        head=tail=newNode;
      }else{
        tail->next = newNode;
        tail=newNode;
      }
     }
     //remove element
     void dequee(){

     node* temp;
     temp=head;
     head =head->next;
     delete temp;
     }
     // is epty
    
    int fornt(){
        if(isempty()){
             cout<<"Queee is empty";
             return -1;
        }
        return head->val;
    }
     bool isempty(){
        return head==NULL;
     }

};

int main(){
    Quees q;
    q.enquee(1);
    q.enquee(2);
    q.enquee(3);
    while(!q.isempty()){
        cout<<q.fornt();
        q.dequee();

    }
    cout<<endl;
    
    return 0;
}