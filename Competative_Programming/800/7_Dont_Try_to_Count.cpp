#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 
int main()
{   
    ios;
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--) {
        ll n,m,cnt=6,f=0,res=0;
        string x,s;
        cin>>n>>m;
        cin>>x>>s;
        while(cnt--) {
            if(x.find(s) != string::npos) {
                f=1;
                break;
            }
            res++;
            x+=x;
        }
        if(f==1)
            cout<<res;
        else
            cout<<-1;
        cout<<endl;
    }
    return 0;     
 }