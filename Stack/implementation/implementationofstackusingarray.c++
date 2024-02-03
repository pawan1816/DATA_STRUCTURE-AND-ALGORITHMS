// implemenation of stack using array


#include<bits/stdc++.h>
using namespace std;
class mystack{
   public:
   int *arr;
   int top;
   int n=10;
   mystack(){
    arr=new int[n];
    top=-1;
   }
  void push(int value){
    if(top==n-1){
        cout<<"there is no empty sapace";
        return;
    }
    else{
        top++;
        arr[top]=value;
    }
   }
   void pop(){
    if(top==-1){
        cout<<"there is no element in the stack";
        return;
    }
    else{
        top--;
    }
   }
   void Top(){
    if(top==-1){
        cout<<"there is no element in the stack";
    }
    cout<<arr[top];
   }
   bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
   }
};

int main(){
    mystack s;
    cout<<s.isempty();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.Top();
    s.pop();
    s.Top();
    cout<<s.isempty();
}
