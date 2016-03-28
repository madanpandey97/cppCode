#include<iostream>
using namespace std;
int main()
{
    char name[100],revname[100];
    int count=0;
    cout<<"enter he string"<<endl;
    cin>>name;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    for(int j=0;j<=count;j++)
    {
        revname[j]=name[count-j];
    }
    for(int k=0;k<=count;k++)
    {
        cout<<revname[k];
    }
}
