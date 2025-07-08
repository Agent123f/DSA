#include<iostream>
#include<vector>
using namespace std ;
bool isvalid(vector<int>arr , int n , int m, int maxallowed){
    int stdu=1; 
    int pages = 0;
    for(int i = 0 ; i<n;i++){
        if(arr[i]>maxallowed){
            return false;
        }
        if(pages +arr[i]<=maxallowed){
            pages+= arr[i];
        }else{
            stdu++;
            pages=arr[i];
        }
    }
    return stdu>m ? false : true;
}

int allocation(vector<int> &arr , int n , int m){
    if(m>n){
        return -1;
    }
    int sum; 
    
    for(int i = 0  ; i<n; i++){
        sum +=arr[i];
    }
    int ans= -1;
    int st=0;
    int end=sum;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(isvalid(arr , n ,  m,  mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;


}
int main(){
    vector<int> arr={15,17,20};
    int n = 3;
    int m =2;
    cout<<allocation(arr,n,m)<<endl;  
    return 0;
}