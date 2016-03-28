#include<bits/stdc++.h>
using namespace std;

class A {
    int a;
public:
    A(){
    cout<<"constructor is now created for class A";
    };
    ~A(){
    cout<<"\n destructor of A class is now called";
    }
};
class B : public A{
public:
    B(){
        cout<<"\nconstructor of B is now called";
    }
    ~B(){
    cout<<"\n now destructor of B is called";
    }
 };

 int main(){
B b;
return 0;
 }
