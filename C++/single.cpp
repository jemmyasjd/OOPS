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

// multilebel inheritance

class BabyDog: public Dog{
    public:
    void weep(){
        cout<<"BabyDog is weeping\n";
    }
    void eat(){
        cout<<"BabyDog is eating\n";
    }
};

int main(){

    Dog d1;
    d1.speak();
    d1.eat();

    // for multilevel inheritance

    BabyDog bd1;
    bd1.speak();
    bd1.bark();
    bd1.weep();
    
    return 0;
}