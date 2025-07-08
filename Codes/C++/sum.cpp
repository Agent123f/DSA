#include<iostream>
using namespace std ;
int main(){
    int sum = 0 ;
    int pro =1 ;
    int maxVal=INT16_MIN;
    int MinVal=INT16_MAX;
    int arr[5]={1,2,3,4,5};
    for(int i = 0 ;i<5;i++){
         sum+=arr[i];
         pro *= arr[i];
         if(maxVal){
            maxVal=max(maxVal,arr[i]);
            cout<<"index is "<<i;
         }
         
         MinVal=min(MinVal,arr[i]);
         swap(arr[maxVal] , arr[MinVal]);
        
    }
    
    cout<<"Sum is = "<<sum<<endl;
    cout<<"Product is = "<<pro<<endl;
    cout<<maxVal<<endl;
    cout<<MinVal<<endl;
    return 0;
}