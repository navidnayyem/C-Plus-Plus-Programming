#include <iostream>
#include <cstring>
using namespace std;

class A
{
protected:
    void sum(int x,int y)
    {
        cout << endl << x + y << endl;
    }
};
class B : public A
{
public:
    int i,j;
    void input(){
        cin >> i >> j;
        sum(i,j);
    }
};

int main()
{
    B obj;
    obj.input();
}
