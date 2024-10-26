// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrom(string& str,int n,int index){
    if(index>=n){
        return true;
    }
    if(str[index]!=str[n]){
        return false;
    }
    return checkPalindrom(str,n-1,index+1);
  
}
int main() {
    string str="adsda";
    int n=str.size();
    if(checkPalindrom(str,n-1,0)){
        cout<<"Yes...";
    }else{
        cout<<"No...";
    }
    return 0;
}