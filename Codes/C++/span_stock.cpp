#include<iostream>
#include<vector>
#include<stack>
using namespace std ;
int main(){
    vector<int> prize={100, 80 , 60 , 70 ,60, 75 , 85};
    vector<int> ans(prize.size() , 0);
    stack<int> s;
    for(int i = 0 ; i<prize.size(); i++){
        while(s.size()>0 && prize[s.top()]< prize[i]){
            s.pop();
        }if(s.empty()){
            ans[i]= i+1;
        }else{
            ans[i]= i-s.top();
        }
        s.push(i);
    }
    for( int val:ans){
        cout<<val;
    }
    
    return 0;
}