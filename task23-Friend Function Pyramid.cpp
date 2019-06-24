#include <iostream>
using namespace std;

class Pyramid
{
public:
    int row,column;
    friend void Fpyramid(Pyramid ob);
};

void Fpyramid(Pyramid ob)
{
//    int i,j;
//    i = ob.row;
//    j = ob.column;
    for(ob.row=1;ob.row<=5;ob.row++)
    {
        for(ob.column=1;ob.column<=ob.row;ob.column++)
        {
            cout << ob.column;
        }
        cout << endl;
    }
}
int main()
{
    Pyramid obj;
    Fpyramid(obj);
}
