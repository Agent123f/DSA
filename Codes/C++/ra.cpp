#include<iostream>
#include<vector>
#include<String>
using namespace std ;
         void helpher(vector<vector<int>> &board , int r , int c, vector<string> &ans, string path  ){
            int n = board.size();
              if (r<=0||c>=n||c<0 || r>=n|| board[r][c]==0){
                return;
              }
              if(r==n-1 && c==n-1){
                return ans.push_back(path);
              }
            //down
             helpher( board , r+1 , c , ans , path+'D');
            //up
             helpher( board , r-1 , c , ans , path+'U');
            //right
             helpher( board , r , c+1 , ans , path+'R');
            //left
              helpher( board , r , c-1 , ans , path+'L');
         }
 void findpath(vector<vector<int>> &board){
     vector<string> ans;
     string path=" ";
 }

int main(){
     vector<vector<int>> board= {{1,0,0,0} , {1,1,0,1} , {1,1,0,0} , {0,1,1,1}};
     vector<string> ans = findpath(board);

    return 0;
}