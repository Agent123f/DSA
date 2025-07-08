// #include<iostream>
// #include <bits/stdc++.h>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std ;


// vector<vector<string>> getpermu( string a , int idx , vector<vector<string>> &ans){
//     if(idx==a.size()){
//         ans.push_back({a});
//     }
//     for(int i = idx ; i< a.size() ; i++){
//         swap(a[idx] , a[i]);
//         getpermu(a,idx+1,ans);
//         swap(a[idx] , a[i]);
//     }
//     return ans;

// }
// int main(){
//     vector<vector<string>>ans;
//     string a= "abc";
//     swap(a[0] , a[2]);
//      getpermu(a,0,ans);
//     cout<<getpermu(a,0,ans);
    
// }
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Recursive function to generate permutations
void getPermutations(string a, int idx, vector<string>& ans) {
    if (idx == a.size()) {
        ans.push_back(a); // Store the current permutation
        return;
    }
    for (int i = idx; i < a.size(); i++) {
        swap(a[idx], a[i]);           // Swap the characters
        getPermutations(a, idx + 1, ans); // Recursively permute the rest
        swap(a[idx], a[i]);           // Backtrack to restore the string
    }
}

int main() {
    vector<string> ans;   // To store all permutations
    string a = "abc";     // Input string

    // Call the function to generate permutations
    getPermutations(a, 0, ans);

    // Print the permutations
    cout << "Permutations of the string are:\n";
    for (string  perm : ans) {
        cout << perm << endl;
    }

    return 0;
}
