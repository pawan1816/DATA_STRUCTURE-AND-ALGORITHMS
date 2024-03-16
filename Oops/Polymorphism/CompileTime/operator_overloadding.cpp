#include<bits/stdc++.h>
using namespace std;

class Complex{
   int real,imagenery;
   public:

   Complex(){

   };
   Complex(int real,int imagenary){
    this->real=real;
    this->imagenery=imagenary;
   };

   void display(){
    cout<<real<<" "<<imagenery<<"i";
   }
   Complex operator +(Complex &c){
    Complex ans;
    ans.real=real+c.real;
    ans.imagenery=imagenery+c.imagenery;
    return ans;
   } 
};

int main(){
    Complex c1(3,4);
    Complex c2(4,5);
    Complex c=c1+c2;
    c.display();
}