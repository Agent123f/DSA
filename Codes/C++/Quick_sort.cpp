#include<iostream>
#include<vector>
using namespace std ;

int partition(vector<int> &arr , int st , int end)
{
    int p_e= arr[end];
    int idx= st-1;
    for(int i = st ; i<end;i++)
    {
          if(arr[i]<=p_e)
          {
            idx++;
            swap(arr[i] , arr[idx]);
          }
    }
    idx++;
    swap(arr[idx] , arr[end]);
    return idx;
}

void QuickSort(vector<int> &arr , int st , int end){
    if(st<end)
    {
       int pvtidx=partition(arr, st, end);
       QuickSort(arr,st , pvtidx-1);//left
       QuickSort(arr,pvtidx+1,end); //right
    }
   
}
int main(){
    vector<int> arr = {5,2,4,6,1,3};
    QuickSort(arr, 0 , arr.size()-1);
    for( int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
