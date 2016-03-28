//5.Write a program to overload the comma operator for a class such that for the instruction a = (b, c) the larger object of ‘c’ and ‘b’ is assigned to ‘a’.
#include<iostream>
using namespace std;

class CommaOpr{
     int num;
      public:
          CommaOpr(int a){num=a; }
          CommaOpr(){ num=0; }
          void getvalue(){
               cout<<"value of num is "<<num<<endl;
           }

        CommaOpr & operator , (CommaOpr &t){
               CommaOpr a;
                if(num>t.num){
                   a.num=num;
                }
                else{
                    a.num=t.num;
                }
              return a;
                }
    };

int main(){
CommaOpr s1(20),s2(40),s3;
s3=(s1,s2);
s3.getvalue();
return 0;
}
