#include<iostream>
using namespace std;

class Pyramid{
private:
   int p,q,r;
public:
   void pyramid(){
   cout<< "Enter row: ";
   cin>>r;
   }
   friend void Fpyramid(Pyramid ob);
};

void Fpyramid(Pyramid ob)
{
    for(ob.p=ob.r;ob.p>=1; ob.p--)
    {
        for(ob.q=1;ob.q<=ob.p;ob.q++)
        {
           cout<< ob.q<< " ";
        }
        cout<< "\t"<<endl;
   }
}

int main()
{
    Pyramid obj;
    obj.pyramid();
    Fpyramid(obj);
}

