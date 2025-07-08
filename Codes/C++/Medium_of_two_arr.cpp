#include<iostream>
#include<vector>
using namespace std ;
vector<int> merge(vector<int> &arr1 , vector<int> &arr2 )
{
    int i = 0 , j=0 ;
    vector<int> temp ;
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<=arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
        }else
        {
            temp.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        temp.push_back(arr1[i]);
        i++;
    }
     while(j<arr2.size()){
        temp.push_back(arr2[j]);
        j++;
    }
    return temp;
}
int main(){
    vector<int> arr1={1,2} ;
    vector<int> arr2={3,4} ;
    vector<int> temp =  merge(arr1,arr2);
     for(int val: temp){
        cout<<val<<" ";
     }
     cout<<endl;
     int n = temp.size();
     double ans=0;
     if(n %2== 0){
        double mid1= n/2-1;
        cout<<"mid1 "<<mid1<<" , Elemet"<< temp[mid1]<<endl;
        double mid2= mid1+1;
        cout<<"mid2 "<<mid2<<" , element"<<temp[mid2]<<endl;
        ans = (temp[mid1] + temp[mid2])/2;
        cout<<"Medium is :- "<<ans;
     }else{
         ans = (n+1)/2;
          cout<<"Your ans is "<<temp[ans-1];
     }
    
}