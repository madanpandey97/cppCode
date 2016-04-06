#include<iostream>
using namespace std;
class time
{
    int mins;
    int sec;
public:
    time()
    {

    }
    time(int m,int s)
    {
        mins=m;
        sec=s;
    }
     friend void operator ++(time &ob)
    {
        ob.sec++;
    }
    time operator +(time &ob)
    {
        time temp;
        temp.sec=sec+ob.sec;
        temp.mins=mins+ob.mins;
        if(temp.sec>=60)
        {
            temp.sec=temp.sec-60;
            temp.mins=temp.mins+1;
        }
        return temp;
    }
    void showtime()
    {
        cout<<endl<<mins<<"mins"<<sec<<"secs";
    }
};
int main()
{
    time ob1(10,20),ob2(12,30),ob3;
    ++ob1;
    ob1.showtime();
    ob3=ob1+ob2;
    ob3.showtime();
}
