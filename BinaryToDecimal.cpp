#include <iostream>
using namespace std;
int main()
{
    int n = 101;
    int ans = 0;
    int rem, mul = 1;
    // while (n > 0)
    // {
    //     // remainder
    //     rem = n % 10;

    //     // num ko divide kr do
    //     n = n / 10;

    //     // ans
    //     ans = rem * mul + ans;

    //     // mul
    //     mul = mul * 2;
    // }
    // cout << ans;

    for (int i = 0; i < n;)
    {
        rem = n % 10;
        n = n / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << ans;
    return 0;
}