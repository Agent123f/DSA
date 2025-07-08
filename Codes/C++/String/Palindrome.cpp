#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
 bool istrue(string str){
    if(str==reverse(str.begin(), str.end())){
        return true;
    }
    return false;
 }
int main() {
    string str;
    istrue(str);
    return 0;
}