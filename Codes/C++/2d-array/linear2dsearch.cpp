#include<iostream>
#include<vector>
using namespace std ;

int maxRowSum( int matrix[][3] , int row , int col){
    int MRSum=INT32_MIN;
    for(int i = 0 ; i<row ; i++){
        int sum = 0 ;
        for(int j = 0 ; j< col ; j++){
           sum += matrix[i][j];
        }
        MRSum = max(MRSum,sum);
    }
    return MRSum;
}
int maxColSum( int matrix[][3] , int row , int col){
    int MCSum=INT32_MIN;
    for(int i = 0 ; i<col ; i++){
        int sum = 0 ;
        for(int j = 0 ; j<row ; j++){
           sum += matrix[j][i];
        }
        MCSum = max(MCSum,sum);
    }
    return MCSum;
}
int main(){
    int matrix [4][3];
    int row = 4; 
    int col = 3;
    int key= 8;
    int mSum = INT32_MIN;
    //input
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j< col ; j++){
            cin>>matrix[i][j];
        }
    }
//output
 for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j< col ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
     cout<<maxRowSum(matrix , row , col)<<endl;
     cout<<maxColSum(matrix , row , col);
     return 0;
}