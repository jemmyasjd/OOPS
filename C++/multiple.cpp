#include <bits/stdc++.h>
using namespace std;

class LandAnimal{
   public: 
   void run(){
       cout<<"LandAnimal is running\n";
   }
};

class WaterAnimal{
    public:
    void swim(){
        cout<<"WaterAnimal is swimming\n";
    }
};

class Amphibian: public LandAnimal, public WaterAnimal{
    public:
    void jump(){
        cout<<"Amphibian is jumping\n";
    }
};



int main(){


    Amphibian a1;

    a1.run();
    a1.swim();
    a1.jump();
    
    return 0;
}