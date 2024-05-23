#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        int ans=0;
        while(p1>0){
            ans++;
            p3--;
            p1--;
            if(p2>0 && p1>0){
                p2--;
                p1--;
                ans++;
            }
        }
        if(p3==0 && p2!=0){
            cout<<-1<<endl;
        }else{
            while(p2>0){
                if(p3<=0){
                    break;
                }else{
                    p2--;
                    p3--;
                    ans++;
                }
            }
            if(p2!=0 || p3%2!=0){
                cout<<-1<<endl;
            }else{
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}