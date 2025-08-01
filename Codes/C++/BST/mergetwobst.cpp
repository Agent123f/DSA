#include<iostream>
#include<vector>
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
void inorder(Node* root,vector<int> &arr){
    if(root==NULL){
        return ;
    }
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);

}
Node* buildbstfrominorder(vector<int>arr , int st , int end){
    if(st>end){
        return NULL;
    }
    int mid= st+(end-st)/2;
    Node* root = new Node(arr[mid]);
    buildbstfrominorder(arr,0,mid-1);
    buildbstfrominorder(arr,mid+1,end);
    return root;

}
Node* mergeBST(Node* root1 , Node*root2){
    vector<int> arr1,arr2;
    inorder(root1,arr1);
    inorder(root2,arr2);
    vector<int> temp;
    int i,j=0;
    while(i<arr1.size()&& j<arr2.size()){
        if(arr1[i]<arr2[j]){
            temp.push_back(arr1[i++]);

        }else{
            temp.push_back(arr2[j++]);
        }
        while(i<arr1.size()){

            temp.push_back(arr1[i]);
        }
         while(j<arr2.size()){

            temp.push_back(arr2[j]);
        }
        return buildbstfrominorder(temp , 0 , temp.size()-1);
    }
}
int main(){
    vector<int> arr1={8,2,1,10};
    vector<int> arr2={5,3,0};

    Node* root1= buildbst(arr1);
    Node* root2= buildbst(arr2);
    mergeBST(root1,root2);

    
    return 0;
}