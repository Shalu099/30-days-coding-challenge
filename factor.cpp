#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0){
            cout << i << " ";
        }
            i++;
    }
    return 0;
}