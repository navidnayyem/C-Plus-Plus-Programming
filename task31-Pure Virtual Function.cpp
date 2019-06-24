#include <iostream>
using namespace std;

class Base
{
public:
    virtual void speech() = 0;
};

class cat : public Base
{
public:
    void speech()
    {
        cout << "Mew Mew" << endl;
    }
};

class dog : public Base
{
public:
    void speech()
    {
        cout << "Ghew Ghew" << endl;
    }
};

int main()
{
    cat obj;
    dog obj1;
    obj.speech();
    obj1.speech();
    return 0;
}
