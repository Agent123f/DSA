#include<iostream>
#include<vector>
#include <algorithm>
using namespace std ;
int main(){
    vector<int> nums = {1,1,2,2,1,1,2,1};
    int n = nums.size();
     int freq=1 , ans = nums[0];
    sort(nums.begin(),nums.end());
    for(int i = 0 ; i<nums.size();i++){     
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1 , ans = nums[i];
        }
        if(freq >n/2){
            cout<<ans;
        }
    }
    return 0;
}