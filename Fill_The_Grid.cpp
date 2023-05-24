#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string cha;
        cin >> cha;
        int len, vowel = 0, i = 0;
        len = cha.size();
        for (i = 0; i < len; i++)
        {
            if (cha[i] == 'a' cha[i] == 'e' cha[i] == 'i' cha[i] == 'o' cha[i] == 'u')
                vowel = vowel + 1;
            else
                vowel = 0;
            if (vowel > 2)
                break;
        }
        if (vowel > 2)
            cout << "Happy" << endl;
        else
            cout << "Sad" << endl;
    }
    return 0;
}