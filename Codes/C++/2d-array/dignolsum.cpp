#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int sum =0;
    vector<vector<int>>mat = {
        {1,2,3} ,
         {4,5,6} ,
         {7,8,9}
    };
    for(int i = 0 ; i<mat.size() ; i++){
   sum+= mat[i][i];
   if( i!= 3-i-1) {
    sum+= mat[i][i];
   }

    }
       cout<<sum<<endl;
    cout<<mat[0][0];
    return 0;
}