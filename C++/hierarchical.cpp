#include <bits/stdc++.h>
using namespace std;

class Animal{
   public: 
   void speak(){
       cout<<"Animal is speaking\n";
   }
   void eat (){
       cout<<"Animal is eating\n";
   }
};

class Dog: public Animal{
    public:
    void bark(){
        cout<<"Dog is barking\n";
    }
    void eat(){
        cout<<"Dog is eating\n";
    }
};

class Cat: public Animal{
    public:
    void meow(){
        cout<<"Cat is meowing\n";
    }
    void eat(){
        cout<<"Cat is eating\n";
    }
};

int main(){

    Dog d1;
    d1.speak();
    d1.eat();


    Cat c1;
    c1.speak();
    c1.eat();
    
    return 0;
}