#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int i = 1;
    // while(i<=n){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }

    do{
        if(i%2==0)
        cout<<i<<" ";
        i++;

    }while(i<=n);

    return 0;
}