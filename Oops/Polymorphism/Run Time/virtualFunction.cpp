#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"all animal speaks different\n";
    }
};
class Dog :public Animal{
    public:
    void speak(){
        cout<<"Bark\n";
    }
};
class Lion :public Animal{
    public:
    void speak(){
        cout<<"Roar\n";
    }
};
class Cat :public Animal{
    public:
    void speak(){
        cout<<"Meow\n";
    }
};

int main(){
   Animal *ptr;
   vector<Animal*>arr;
   arr.push_back(new Cat());
   arr.push_back(new Lion());
   arr.push_back(new Dog());
   arr.push_back(new Animal());
   arr.push_back(new Cat());
   arr.push_back(new Lion());
   for(int i=0;i<arr.size();i++){
    ptr=arr[i];
    ptr->speak();
   }
}
