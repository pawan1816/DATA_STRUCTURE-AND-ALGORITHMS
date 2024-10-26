// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
string reverse(string& str,int n,int index){
    if(index>=n){
        return "";
    }
    string temp="";
    
    temp+=reverse(str,n,index+1);
    temp+=str[index];
    return temp;
    
}
int main() {
    string str="asonfdnv";
    int n=str.size();
    cout<<reverse(str,n,0);

    return 0;
}


....................................2nd way...................................................

// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void reverse(string& str,int n,int index){
    if(index>=n){
        return ;
    }
    char ch=str[index];
    str[index]=str[n];
    str[n]=ch;
    
    reverse(str,n-1,index+1);
}
int main() {
    string str="asonfdnv";
    int n=str.size();
    reverse(str,n-1,0);
    cout<<str;

    return 0;
}