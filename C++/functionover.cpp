#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello from A\n";
    }

    void sayHello(string name){ // but here if the parameter is not passed then will give error 
        cout<<"Hello "<<name<<" from A\n";
    }

    int sayHello(int a){
        return a;
    }

    //  int sayHello(string name){
    //     cout<<"Hello "<<name<<" from A\n"; this will give error as function overloading is not possible on the basis of return type
    //     return 6;
    // }

    // you either have to change the number of the parameters or the type of the parameters
};

int main(){
    A a1;
    a1.sayHello();
    a1.sayHello("Rahul");
    cout<<a1.sayHello(5)<<endl;

    return 0;
}