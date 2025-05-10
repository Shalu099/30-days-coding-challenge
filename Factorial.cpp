#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int i = 1;
    int fact = 1;

    // while (i <= n)
    // {
    //     fact *= i;

    //     i++;
    // }
    // cout << "Factorial:" << fact << endl;

    do
    {
        fact *= i;
        i++;
    } while (i <= n);

    cout << fact << " ";
    return 0;
}