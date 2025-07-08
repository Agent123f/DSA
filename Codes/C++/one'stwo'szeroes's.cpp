#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int arr[7]={0,0,1,1,2,2,0};
    int countz=0;
    int counto=0;
    int countt=0;
    for(int i = 0 ; i<7 ; i++){
        if(arr[i]==0){
            countz++;
        }
        else if(arr[i]==1){
           counto++;
        }else{
            countt++;
        }
        
    }
    for(int i= 0 ; i<countz;i++){
        arr[i]=0;
    }
    for(int i= 0+countz ; i<counto;i++){
        arr[i]=1;
    }
    for(int i= 0+counto ; i<countt;i++){
        arr[i]=2;
    }
    for(int i = 0 ; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<counto;
    return 0;
}