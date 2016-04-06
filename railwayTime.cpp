
#include<iostream>
using namespace std;
class railway_time;
class civil_time
{
    int hours;
    int mins;
public:
    civil_time()
    {

    }
    civil_time(int h,int m)
    {
        hours=h;
        mins=m;
    }
    civil_time(railway_time &ob);
    void showtime(int a)
    {
        if(a==0)
        cout<<endl<<hours<<"hours"<<mins<<"mins"<<"AM";
        if(a==1)
            cout<<endl<<hours<<"hours"<<mins<<"mins"<<"PM";
    }

};
class railway_time
{
    int hours;
    int mins;
public:
    railway_time()
    {

    }
    railway_time(int h,int m)
    {
        hours=h;
        mins=m;
    }
     void showtime()
    {
        cout<<endl<<hours<<"hours"<<mins<<"mins";
    }
    int geth(){return hours;}
    int getm(){return mins;}
};

civil_time::civil_time(railway_time &ob)
    {
        if(ob.geth()>12)
        {
            hours=-(12-ob.geth());
            mins=ob.getm();
            showtime(1);
        }
        else{
            hours=ob.geth();
            mins=ob.getm();
            showtime(0);
        }
    }
int main()
{
    railway_time ob1(22,10);
    civil_time ob2;
    ob2=ob1;//=ob1;
    return 0;
}
