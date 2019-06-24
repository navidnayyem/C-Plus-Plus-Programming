#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "This is output\n"; //this is single line comment
    /* you can still use C style comments */

    //input a number using >>
    cout << "Enter a Number: ";
    cin >>i;

    //now, output a number using <<
    cout << i << " Squared is " << i*i << "\n";

    return 0;
}
