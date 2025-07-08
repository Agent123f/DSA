#include<iostream>
using namespace std;
int main(){
    
    int size;
    cout<<"Enter size of Array:--> "<<" ";
    cin>>size;
    int arr[size];
    int ms= INT16_MIN;
    for(int i = 0 ; i< size ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i<size; i++){
        int cs= 0;
        for(int j = i ; j<size ; j++){
        //     for(int st = i ; st<=j;st++){
        //         cout<<arr[st];
        //     }
        //     cout<<" ";
        // }
        // cout<<endl;
        cs += arr[j];
        ms=max(cs,ms);

    }
    }
    cout<<"your max sum is : ->"<<ms;
    return 0;
}