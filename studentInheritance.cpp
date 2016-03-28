#include<bits/stdc++.h>
using namespace std;
class Student{

public:
    int roll_no;
    string name;
    string course;
    void Input_student(){
        cout<<"enter data of student"<<endl;
        cin>>roll_no;
        cin>>name;
        cin>>course;
    }
    void display_student(){
      cout<<"roll number of student is"<<" " <<roll_no<<endl;
      cout<<"name of student is"<<" " <<name<<endl;
      cout<<"course of student id "<<" " << course<<endl;
      }

};

class Exam : public Student{
int marks1;
int marks2;
int marks3;

public:
    void Input_result(){
    cout<<"enter marks in three subject"<<endl;
    cin>>marks1>>marks2>>marks3;
    }
    void Output_result(){
    cout<<"Name of student is "<<" "<<name<<endl;
    cout<<"roll number of student"<<" "<<roll_no<<endl;
    cout<<"course of student"<<" "<<course<<endl;
    cout<<"subject1"<<" "<<marks1<<endl;
    cout<<"subject2"<<" "<<marks2<<endl;
    cout<<"subject3"<<" "<<marks3<<endl;
    }
    };


int main()
{

    Exam ex[2];
    int i;
     for(i=0;i<2;i++){
        ex[i].Input_student();
        ex[i].Input_result();
     }
 for(i=0;i<2;i++){
        ex[i].Output_result();

     }
     return 0;
}
