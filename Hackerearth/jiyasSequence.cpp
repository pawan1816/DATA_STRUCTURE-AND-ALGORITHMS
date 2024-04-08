#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int temp;
		long long calculateMul=1;
		for(int i=0;i<n;i++){
			cin>>temp;
			calculateMul*=temp;
		}
		int t=calculateMul%10;
		if(t==2 || t==3 || t==5){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}