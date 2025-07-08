#include<iostream>
#include<vector>
using namespace std ;
class circularQue{
    int *arr;
    int cap;
    int currSize;
    int r , f;
    public:
     circularQue(int size){
      cap=size;
      arr = new int[cap];
      r=-1;
      currSize=0;
      f=0;

    }
     void push(int data){
      if(currSize==cap){
        cout<<"Quee is full"<<endl;
        return;
      }
      r=(r+1) % cap;
      arr[r]=data;
      currSize++;

      }
      void pop(){
        if(currSize==cap){
        cout<<"Quee is full"<<endl;
        return;
      }
      f=(f+1)%cap;
      currSize--;
      }
      int fornt(){
        return arr[f];
      }
      bool empty(){
        return r==-1;
      }

    };

int main(){
  circularQue cq(3);
  cq.push(1);
  cq.push(2);
  cq.push(3);
  cq.push(4);
    
    return 0;
}