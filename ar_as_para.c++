#include <iostream>
#include <stdio.h>
using namespace std;

// void fxn(int *a, int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }


int *fxn(int *a)
{
    int *p;
    p = (int*)malloc(sizeof(int));
    return(p);
}

int main()
{
    int a[5]={2,4,6,8,10};
    // int *a;
    fxn(a);
    return 0;
}