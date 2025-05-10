#include <iostream>
using namespace std;
int main()
{
    char name = 'a';
    if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u')
        cout << "vowel";
    else
        cout << "consonant";
    return 0;
}