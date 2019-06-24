#include <iostream>

using namespace std;

class alphabets
{
public:
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n,i;
    int vowels=0;

    void input()
    {
        cout << "How many alphabets do you want to insert into the array?";
        cin >> n;
        cout <<"\nNow Enter " << n << " Alphabets:" << endl;
        for(i=1;i<=n;i++)
            {
                cin >> alpha[i];
            }
    }
    void search_vowel()
    {
        cout << "\nThe VOWELS are: " << endl;
        for(i=1;i<=n;i++)
        {
            if(alpha[i]=='A' || alpha[i]=='E' || alpha[i]=='I' || alpha[i]=='O' || alpha[i]=='U' || alpha[i]=='a' || alpha[i]=='e' || alpha[i]=='i' || alpha[i]=='o' || alpha[i]=='u')
                {
                    vowels++;
                    cout << alpha[i] << "\t" << endl;
                }

        }
        cout << "\nTotal Number of Vowels: "<< vowels;
        }
};

int main(){
    alphabets obj;
    obj.input();
    obj.search_vowel();
    return 0;
}

