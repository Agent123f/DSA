#include<iostream>
#include<vector>
using namespace std ;
class Node{
    public:
    Node* left;
    Node* right;
    int val;
    Node(int data){
        left = right=NULL;
        val=data;
    }
};
Node*leftmostnode(Node*root){
    Node* ans;
    while(root!=NULL){
        ans=root;
        root=root->right;

    }
    return ans;
}
Node* rightmostnode(Node*root){
      Node* ans;
    while(root!=NULL){
        ans=root;
        root=root->left;

    }
    return ans;
}

vector<int> getps(Node*root , int key){
    Node*curr=root;
    Node* pres=NULL;
    Node* suces=NULL;
    while(curr!=NULL){
        if(key<curr->val){
          suces=curr;
          curr=curr->left;
        }
        else if(key>curr->val){
            pres=curr;
            curr=curr->right;
        }
        else{
            if(curr->left!= NULL){
                //inorder prese
                pres=leftmostnode(curr->left);
            }if(curr->right!=NULL){
                suces=rightmostnode(curr->right);
            }
            break;
        }
    }
    return {pres->val , suces->val};
}
int main(){
    Node* root= new Node(6);
    root->left=new Node(4);
    root->left->left=new Node(1);
    root->left->right=new Node(5);
    root->right=new Node(8);
    root->right->left= new Node(7);
    root->right->right= new Node(9);
    int key=6;
    vector<int> ans =getps(root,key);
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;

    
    return 0;
}