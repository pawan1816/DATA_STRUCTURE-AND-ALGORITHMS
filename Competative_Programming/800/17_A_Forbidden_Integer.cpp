#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"Yes"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }else{
            if(k==1){
                cout<<"NO"<<endl;
            }else if(n%2==0){
                cout<<"Yes"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++){
                    cout<<2<<" ";
                }
                cout<<endl;

            }else{
                if(k>=3){
                    cout<<"Yes"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0;i<(n/2)-1;i++){
                        cout<<2<<" ";
                    }
                    cout<<3<<endl;
                }else{
                    cout<<"No"<<endl;
                }
                
            }
        }
    }
}