#include <iostream>
using namespace std;
int main()
{
    int n = 12;
    int i = 2;
    bool isprime = true;
    if (n <= 1)
        isprime = false;
    while (i < n)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
        i++;
    }
    if (isprime)
        cout << n << " is prime " << endl;
    else
        cout << n << " is not prime" << endl;
    return 0;
}