
#include<iostream>
using namespace std;
void input();
void output();
string nm[10000],cr[10000];
int idc[10000],i,a,j,k,crs,mrks[10000],sd;
void input()
{
    cout<<"How many student : ";
    cin>>sd;
    cout<<"How many course : ";
    cin>>crs;
    for(i=0;i<sd;i++)
    {
        cout<<"Enter "<<i+1<<"st student's name : ";
        cin>>nm[i];
        for(a=i;a<=i;a++)
        {
        cout<<"Enter "<<a+1<<"st student's ID : ";
        cin>>idc[a];
        }
        for(j=0;j<crs;j++)
        {
            cout<<"Course name : ";
            cin>>cr[j];
            for(k=j;k<=j;k++)
            {
            cout<<"Course Mark : ";
            cin>>mrks[k];
            }
        }
    }
}
void output()
{
    for(i=0;i<sd;i++)
    {
        cout<<"\n"<<"NAME : "<<nm[i]<<endl;
        for(a=i;a<=i;a++)
        {
        cout<<"ID : "<<idc[i]<<endl;
        }
        for(j=0;j<crs;j++)
        {
            cout<<"COURSE NAME : "<<cr[j]<<"\t\t";
            for(k=j;k<=j;k++)
            {
                cout<<"MARKS : "<<mrks[k]<<endl<<endl;
            }
        }
    }

}
int main()
{
    input();
    output();
    return 0;
}
