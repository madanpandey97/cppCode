//.Write  a  program  to  define  a  class  Array  that  will  contain  an  array  of  integers  as  a  private  data  member  of  the  class. Overload  the  subscript  operator  []  so  that  it  will  take  an  integer  index  as  an  argument  and  return  the  reference  of element at that index in the array.

#include<iostream>
using namespace std;

class Array{
        int arr[10];
        public:
            void setArray(){
                int i, j;
                cout<<"enter element of array"<<endl;
                for(i=0;i<10;i++){
                        cin>>arr[i];
                       }
                          }

            void getArray(){
                int i, j;
                for(i=0;i<10;i++){
                        cin>>arr[i];
                       }
                 }
            Array& operator [](int A){
            cout<<"The element of Array at:"<<A<<"index is "<<endl;
            cout<<arr[A];
             }

            };
int main(){
     Array arr1;
     arr1.setArray();
     cout<<"enter index of element"<<endl;
     int n;
     cin>>n;
     arr1[n];
     return 0;
     }
