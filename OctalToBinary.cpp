#include <iostream>
using namespace std;
int main()
{
    int n = 2127;
    int rem, ans = 0, mul = 1;
    while (n > 0)
    {
        //rem
        rem = n % 10;
        //quotient
        n = n / 10;
        //qns
        ans = rem * mul + ans;
        //mul
        mul *= 8;
    }
    cout << ans << " ";

    return 0;
}