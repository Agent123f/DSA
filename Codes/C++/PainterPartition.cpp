#include<iostream>
#include<vector>
using namespace std ;
 bool istrue(vector<int> &arr , int n , int m , int MaxTime){
   int painter =1 , time =0;

   for(int i =0 ; i<n ; i++){
    if(time + arr[i] <=MaxTime){
        time += arr[i];
    }else{
        painter ++;
        time= arr[i];
    }
   }
   return painter<=m ? true : false;

 }
 int minTimeTopaint(vector<int> &arr , int n , int m){
 int sum=0 , MaxVal=INT32_MIN ;
 for(int i = 0 ;i<=n ; i++){
     sum+= arr[i];
     MaxVal= max(MaxVal ,arr[i]);
 }
  int st=MaxVal , end =sum ,ans=-1;
  while(st<=end){
    int mid = st+(end-st)/2;
    if(istrue( arr , n , m , mid)){
         ans=mid;
         end=mid-1;
    }else{
        st=mid+1;
    }
  }
  return ans;
 }
int main(){
    vector<int> arr = {40,30,10,20};
    int m = 2;
    int n =3;
    cout<<minTimeTopaint(arr, n,m)<<endl;;
    
    return 0;
}