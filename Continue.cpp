#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    int i = 1;
    for(i=1;i<=n;i++){
        if(i%3==0 || i%5==0)
            continue;
       
     cout << i << " ";
    }
     
    return 0;
}