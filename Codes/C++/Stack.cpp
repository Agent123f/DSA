#include<iostream>
#include<vector>
using namespace std ;

class stack{
    int arr[10];

    public:
    void push(int val){
        if(sizeof(arr)>10){
            cout<<"stack overflow";
        }else{
            arr[0]=val;
        }
    }

};
int main(){
    
    return 0;
}