#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void display(){
        cout<<"Class A\n";
    }
};

class B{
    public:
    void display(){
        cout<<"Class B\n";
    }
};

class C: public A, public B{
    public:
};
int main(){
    C c1;
    // c1.display(); // this gives error due to ambiguity

    // to resolve this : 

    c1.A::display();

    return 0;
}