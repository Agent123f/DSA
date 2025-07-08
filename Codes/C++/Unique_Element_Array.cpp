#include<iostream>
using namespace std ;
int  unique(int arr[] , int size){
    for(int i = 0 ;i<size;i++){
        int j;
        for( j = 0 ; j<size;j++){
            if(arr[i]==arr[j] &&  i!=j){
                break;
            }
            
        }
    if(j==size){
                return arr[i];
            
        
    }
    }
    return -1;
  
}
int main(){
    int size;
    cout<<"Enter size of Array";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
    cout<<unique(arr,size);
    return 0;
}