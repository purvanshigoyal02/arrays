#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[6]={12,23,25,36,13};

    cout<<sizeof(a)<<endl;      // you can also use "\n" in place of endl
    cout<<a[3]<<endl;

    printf("%d\n",a[5]);

    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<endl;
    }

    for(int x:a)       // another way for printing array i.e looping ese v kr skte
    {
        cout<<x<<endl;
    }
    return 0;
    
}