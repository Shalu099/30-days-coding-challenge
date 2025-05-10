#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int curr=0;
    int prev1 = 0, prev2 = 1;
    if (n <= 1)
        return n;
    
    for (int i = 1; i <= n; i++)
    {
        if(i==1){
            cout<<prev1<<endl;
            continue;
        }
        if(i==2){
            cout<<prev2<<endl;
            continue;
        }
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
        cout << curr<<endl;
    }

    return 0;
}