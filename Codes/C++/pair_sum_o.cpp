#include<iostream>
#include<vector>
using namespace std ;
vector<int> PairS(vector<int> nums , int target){
    int st = 0 ; 
    vector<int> ans;
    int ed= nums.size();
    while(st<ed){
        if(nums[st]+nums[ed]>target){
            ed--;
        }
        if(nums[st]+nums[ed]<target){
            st++;
        }
        if(nums[st]+nums[ed]==target){
            ans.push_back(st);
            ans.push_back(ed);
            return ans;
        }
    }
}
int main(){
    vector<int> nums ={7,8,9,10,11,12};
    int target = 21;
    vector<int> a= PairS(nums,target);
    cout<<a[0]<<","<<a[1];

    return 0;
}