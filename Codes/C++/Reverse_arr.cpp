#include<iostream>
using namespace std ;
void rev_arr(int arr[], int size){
   int st=0;
   int ed=size-1;
   while(st<ed){
    swap(arr[st],arr[ed]);
    st++;
    ed--;
   }
   
}
int main(){
    int arr[5]={1,2,3,4,5};
    rev_arr(arr,5);
    for(int i = 0;i<5;i++){
    cout<<arr[i];
   }
    return 0;
}