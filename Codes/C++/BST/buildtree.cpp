#include<iostream>
#include<vector>
using namespace std ;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
Node* insert(Node* root,int val ){
if(root==NULL){
    return new Node(val);
}if(val>root->data){
    root->right=insert(root->right,val);
}else{
    root->left=insert(root->left,val);
}
return root;

}
Node* buildbst(vector<int>arr){
    Node* root=NULL;
    for(int val:arr){
        root=insert(root,val);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool serach(Node* root , int key){
    if(root==NULL){
        return false;
    }
    if(key==root->data){
        return true;
    }
    if(key>root->data){
        return serach(root->right,key);
    }else{
        return serach(root->left,key);
    }
}
Node* Ios(Node* root){
while (root!=NULL && root->left !=NULL){
    root=root->left;
}
return root;

}
Node* delN(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(key<root->data){
        root->left=delN(root->left,key);
    }else if(key>root->data){
        root->right=delN(root->right,key);
    }else{
        if(root->left ==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }else if(root->right==NULL){
             Node* temp = root->left;
            delete root;
            return temp;
        }else{
            Node* IS = Ios(root->right);
            root->data = IS->data;
            root->right=delN(root->right,IS->data);

        }
    }
    return root;
}
int main(){
    vector<int> ans={3,2,1,5,6,4}; 
    Node* root= buildbst(ans);
    cout<<"Before:---";
    inorder(root);
    cout<<endl;
    delN(root,6);
    cout<<"After----";
    inorder(root);
    
    return 0;
}