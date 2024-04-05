#include <bits/stdc++.h>
using namespace std;

class B{
    public: 
    int a;
    void operator+(B obj){
        cout<<"output: "<< a-obj.a<<endl;
    }

    void operator() (){
        cout<<"I am brakcet"<<endl;
    }
};

int main(){
    B b1, b2;
    b1.a = 10;
    b2.a = 5;
    b1+b2;

    b1();
    return 0;
}
