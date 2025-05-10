#include <iostream>
using namespace std;
int main()
{
    int n = 13;
    int rem, ans = 0, mul = 1;
    while (n > 0)
    {
        //rem
        rem = n % 8;
        //quotient
        n = n / 8;
        //qns
        ans = rem * mul + ans;
        //mul
        mul *= 10;
    }
    cout << ans << " ";

    return 0;
}