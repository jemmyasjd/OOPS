#include <bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero{
    private:
    int health=100;
    public:
    string *name;

    // static member
    static int count;

    Hero(){
        // cout<<"Hero created"<<endl;
    }
    Hero(int h){
        health=h;
    }
    int damage=10;
    int armor=5;
    int level=1;

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health=h;
    }

    void setName(string n){
        name=new string;
        *name=n;
    }

    // copy constructor

    // Hero(Hero &hero){
    //     this->health=hero.health;
    //     cout<<"Copy constructor called"<<endl;
    // }

    // deep copy constructor

    // Hero(Hero &hero){
    //     this->health=hero.health;
    //     this->name=new string;
    //     *this->name=*hero.name;
    // }

    // Destructor

    ~Hero(){
        cout<<"Destructor called"<<endl;
        delete name;
    }

};


// static member

int Hero::count=6;

// you can also make this class on the other file and include it here

int main()
{
    // Hero rahul;

    // cout<<rahul.getHealth()<<endl;
    // rahul.setHealth(5);
    // cout<<rahul.getHealth()<<endl;
    // //dynamic initialization

    // Hero *pipal = new Hero;

    // cout<< (*pipal).level<<endl;
    // // OR

    // cout<< pipal->level<<endl;

    //copy constructor

    // Hero Try2(50);
    // cout<<Try2.getHealth()<<endl;

    // Hero Try(Try2);
    // cout<<Try.getHealth()<<endl;

    // // if the member is not dynamically allocated then the default copy constructor will work fine
    // Try.setHealth(100);

    // cout<<Try.getHealth()<<endl;
    // cout<<Try2.getHealth()<<endl;


    // // Shallow copy

    // Hero rahul;
    // rahul.setName("Rahul");

    // Hero rahul2(rahul);
    // cout<<*rahul2.name<<endl;

    // *rahul.name="Rahul Singh";

    // // if the element is not dynamically allocated then the shallow copy will show some unexpected behaviour

    // cout<<*rahul2.name<<endl;
    // cout<<*rahul.name<<endl;

    // // assignmnet operator

    // Hero ramesh;
    // ramesh.setName("Ramesh");

    // Hero suresh;
    // suresh=ramesh;

    // cout<<*ramesh.name<<endl;
    // cout<<*suresh.name<<endl;


    // static member

    cout<<Hero::count<<endl;
    return 0;
}
