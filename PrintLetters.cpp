#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    cout << "capital letters:";
    while (ch <= 'Z')
    {
        cout << ch << " ";
        ch++;
    }

    ch = 'a';
    cout << "small letters:";
    while (ch <= 'z')
    {
        cout << ch << " ";
        ch++;
    }
    return 0;
}