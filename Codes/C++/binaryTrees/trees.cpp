#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int val){
        data=val;
        left = right= NULL;
    }

};
static int idx=-1;
Node* Build_Tree(vector<int> pre_o){
    idx++;
    if (pre_o[idx]==-1){
        return NULL;
    }
    Node* root = new Node(pre_o[idx]);
  
    root->left=Build_Tree(pre_o);
    root->right=Build_Tree(pre_o);
    return root;
}
void pre_order(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
void post_order(Node*root){
    if(root==NULL){
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<"  ";
}
void in_order(Node* root){
    if(root==NULL){
        return;
    }
    in_order(root->left);
    cout<<root->data<<"   ";
    in_order(root->right);
}
int height(Node*root){
    if(root==NULL){
        return 0;
    }
    int l_h=height(root->left);
    int r_h=height(root->right);
    return max(l_h,r_h)+1;
}

int sum (Node* root){
    if(root==NULL) return 0;
    int l_s=sum(root->left);
    int r_s=sum(root->right);
    root->data += l_s + r_s;
    return root->data;
}

int LevelOrder(Node* root){
    map<int , int > m;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(q.size()>0){
        Node* currE=q.front().first; 
        int currHD= q.front().second;
        q.pop();
        if(m.find(currHD)==m.end()){
            m[currHD]=currE->data;
        }
        if(currE->left!=NULL){
            q.push({currE->left,currHD-1});
            
        }
        if(currE->right!=NULL){
            q.push({currE->right,currHD+1});
        }
    }
    for(auto it : m){
        cout<<it.second<<" ";
    }
    cout<<endl;

}

int main(){
    vector<int> pre_o={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= Build_Tree(pre_o);
    pre_order(root);
    cout<<endl;
    sum(root);
    cout<<"check running status  Q:-> Trsforme sum of thre treeeee"<<endl;
    pre_order(root);
    cout<<endl;

    // post_order(root);
    // cout<<endl;
    // in_order(root);
    // cout<<"height of the tree ia :----> "<<height(root);
    //cout<<root->data<<endl;
    //LevelOrder(root);

}