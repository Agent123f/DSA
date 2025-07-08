#include<iostream>
#include<vector>
using namespace std ;
vector<int>mf(vector<int>nums){
 int n = nums.size();
  vector<int> ans;
    for(int  val : nums){
        int freq=0;
        for(int el:nums){
            if(el==val){
                freq++;
            }
            
        }
        if(freq > n/2){
            ans.push_back(val);
            }
    }
    return ans;
    
}
int main(){
    int count=0;
    vector<int> nums={2,2,2,2,1,1};   
}