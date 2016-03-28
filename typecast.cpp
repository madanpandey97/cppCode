#include<iostream>
using namespace std;

class A{
int data;
public:
    A(){
    data=2;
    }
    void show(){
    cout<<data;
    }
    operator int (){return data;}
    };
int main()
{
A a;
int i;
i=a;
a.show();
return 0;
}
