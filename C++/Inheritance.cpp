#include <bits/stdc++.h>
using namespace std;

class Human{
    public:

    int height;
    int weight;
    int age;

    void setWeight(int w){
        weight = w;
    }

    private: 
    int pri;
};

class Male: public Human{
    public:
    void sleep(){
        cout<<"Male is sleeping\n";
    }
    void setHeight(int h){
        height = h;
    }

    // pri = 10; // This will give error as pri is private in Human class
    
};  

int main(){
    Male m1;
    m1.age = 20;
    m1.height = 6;
    m1.weight = 70;
    cout<<m1.weight<<endl;
    m1.setWeight(80);
    cout<<m1.weight<<endl;

    m1.sleep();
    m1.setHeight(7);

    return 0;
}
