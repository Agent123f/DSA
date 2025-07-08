#include<iostream>
#include<vector>
using namespace std ;
vector<int> pairS(vector<int>nums , int target){
    vector<int> ans;
    int n = sizeof(nums);
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ;j<n ; j++){
if(nums[i]+nums[j]==target){
    ans.push_back(i);
    ans.push_back(j);
    return ans;

}
        }
    }
}
int main(){
    vector<int>ans={2,7,9,10,12,15};
    int target = 11;
    vector<int> a = pairS(ans,target);
    cout<<a[0]<<","<<a[1];
    return 0;
}