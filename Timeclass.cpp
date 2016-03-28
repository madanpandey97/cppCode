#include<iostream>
using namespace std;

class Time{
     int hour;
     int second;
     int minute;
 public:
     Time(int h,int m,int s){ hour=h; minute=m; second=s;}
     Time(){hour=0; minute=0; second=0;}
     void setTime(){
         cout<<"enter time in hour,minute and second";
         cin>>hour;
         cin>>minute;
         cin>>second;
     }
     void getTime(){
        cout<<"The new reset time is:"<<endl;
        cout<<hour<<":"<<minute<<":"<<second<<endl;
        }
    void operator ++ (){

            second=second+1;

    }
    Time  operator +(Time r){
             Time s;
             s.hour=hour+r.hour;
             s.minute=minute+r.minute;
             s.second=second+r.second;
             return s;
             }
    };
int main(){
Time t1(03,40,22),t2(06,12,21),t3;
t1.getTime();
t2.getTime();
t3=t1+t2;
t3.getTime();
++t3;
t3.getTime();
return 0;
}
