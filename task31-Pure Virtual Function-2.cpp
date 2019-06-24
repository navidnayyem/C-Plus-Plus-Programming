#include <iostream>
using namespace std;

class animal
{
public:
    virtual void speech() = 0;
};

class bird : public animal
{
public:
    void speech()
    {
        cout << "Bird Chirps" << endl;
    }
};

class tiger : public animal
{
public:
    void speech()
    {
        cout << "Tiger Roars" << endl;
    }
};

int main()
{
    animal *obj;
    bird obj1;
    tiger obj2;

    obj=&obj1;
    obj->speech();

    obj=&obj2;
    obj->speech();

    return 0;
}
