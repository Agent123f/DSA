#include<iostream>
#include<vector>
#include <climits> 
using namespace std ;
class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int val){
        left=right=NULL;
        data=val;
    }
};

class Info{
    public:
    int mi , mx,sz;

    Info(int min , int max , int size){
        mi =min;
        mx=max;
        sz=size;
      }
};
Info helpher(Node* root){
    if(root==NULL){
        return Info(INT_MAX,INT_MIN,0);
    }
    Info left =helpher(root->left);
    Info right=helpher(root->right);
    if(root->data > left.mx && root->data < right.mi){
        int currmin=min(root->data,left.mi);
        int currmax=max(root->data,right.mx);
        int size= (left.sz+right.sz+1);
        return Info(currmin,currmax,size);
    }else{
        return Info(INT_MIN,INT_MAX,max(left.sz,right.sz));
    }
}
int largestBst(Node*root){
     Info ans =helpher(root);
     return ans.sz;
}

int main(){
    Node* root= new Node(10);
    root->left=new Node(5);
    root->right=new Node(15);
    root->left->left=new Node(1);
    root->left->right=new Node(8);
    root->right->right=new Node(7);
    cout<<largestBst(root)<<endl;   
    
    
    return 0;
}