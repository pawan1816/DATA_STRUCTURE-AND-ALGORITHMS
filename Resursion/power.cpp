#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
int main(){
    int n=5;
    int ans=power(n);
    cout<<ans<<endl;
}



....................power of any number.....................................



#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}



/////////////////////////////////// For the better time complextiy  //// time complexity O(log(n))


#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2!=0){
        ans*=ans;
        ans*=a;
        
    }else{
        ans*=ans;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}