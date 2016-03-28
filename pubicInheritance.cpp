#include<bits/stdc++.h>
using namespace std;

class  A{

public:

    int a;
    string name;
    void getdata();
    void setdata();
    void  checkfun();
    };
class B : public A{
 public:
    void getdata(){
       cout<<"\nenter numerical value"<<endl;
        cin>>a;
        cout<<"\nenter string value"<<endl;
        cin>>name;
    }
    void setdata(){
    cout<<"value is"<<" "<<a<<" "<<"string is"<<" "<<name<<endl;
    }
    void checkfun(){
    cout<<"function is now inherit";
    }
};


int main(){
B base;
base.checkfun();
base.getdata();
base.setdata();

return 0;
}
