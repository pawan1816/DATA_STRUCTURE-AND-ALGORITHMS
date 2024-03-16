#include<bits/stdc++.h>
using namespace std;

class Calculate_Area{
    
    public:
    void area(int n){
        cout<<n*n*3.14<<endl;
    }
    void area(int l,int b){
        cout<<l*b<<endl;
    }
};

int main(){
    Calculate_Area obj;
    obj.area(5);
    obj.area(4,3);

}