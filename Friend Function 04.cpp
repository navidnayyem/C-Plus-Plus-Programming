#include <iostream>
using namespace std;

class swap_num
{
private:
    double n1,n2,temp;
public:
    void display()
    {
        cout << "This is a Program that swaps Two Numbers" << endl << endl;
    }
    void input()
    {
        cout << "Enter 1st Number: ";
        cin >> n1;
        cout << "Enter 2nd Number: ";
        cin >> n2;
    }
    friend void output(swap_num ob);
};
void output(swap_num ob)
{
    ob.temp = ob.n1;
    ob.n1 = ob.n2;
    ob.n2 = ob.temp;

    cout << endl << "Swapping Numbers" << endl << endl;
    cout << "1st NUMBER = " << ob.n1 << endl << "2nd NUMBER = " << ob.n2 << endl;
}
int main(){
    swap_num obj;
    obj.display();
    obj.input();
    output(obj);
    return 0;
}
