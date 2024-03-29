/*Q.6. Write a program with a mother class animal. Inside it define a name and an age variables, and set_value() function.
       Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra
       information (e.g. place of origin).*/

#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
protected:
    int age;
    char name[10];
public:
    void set_data(int a,char b[10])
	 {
		age = a;
        strcpy(b,name);
	 }
};

class Zebra:public Animal
{
public:
    void message_zebra()
    {
        cout << "The zebra named " << name << " is " << age << " years old. The zebra comes from Africa." << endl;
    }
};

class Dolphin:public Animal
{
public:
    void message_dolphin()
    {
        cout << "The dolphin named "<< name << " is " << age << " years old. The dolphin comes from New Zealand." << endl;
    }
};

int main ()
{
    Zebra zeb;
	Dolphin dol;
	char n1[10] = "Ana";
	char n2[10] = "Jin";

	zeb.set_data(5,n1);
	dol.set_data(2,n2);

	zeb.message_zebra();
	dol.message_dolphin();

	return 0;
}
