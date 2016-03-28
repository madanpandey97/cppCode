#include <iostream>
using namespace std;
class matrix{
  int a[3][3];
  int i,j,k,sum=0;
public:
    void setdataA(){
          for(i=0;i<3;i++){
               for(j=0;j<3;j++){
                    cin>>a[i][j];
                               }
                         }}
    void showdataA(){
             for(i=0;i<3;i++){
               for(j=0;j<3;j++){
                    cout<<a[i][j]<<endl;
                               }
                   }}

    matrix operator *(matrix &ob){
          matrix temp;
          int i,j,k;
             for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                         temp.a[i][j]=0;
                    for(k=0;k<3;k++){
                       temp.a[i][j]=temp.a[i][j]+a[i][k]*ob.a[k][j];
                    }
                }
             }
     }

};

int main(){

 matrix m1,m2,m3;
  m1.setdataA();
  m2.setdataA();
 m3=m1*m2;
 m3.showdataA();
return 0;
}
