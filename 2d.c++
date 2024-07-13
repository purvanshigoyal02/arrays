#include <iostream>
#include <stdio.h>

using namespace std;

// everything in stack
// int main()
// {
//     int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<A[i][j]<<endl;
//         }

//     }

// }

// declaration of pointer in stack and main array in heap using single pointer
// int main()
// {
//     int *a[3];
//     a[0]=new int[4];
//     a[1]=new int[4];
//     a[2]=new int[4];

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         scanf("%d ",&a[i][j]);
    //     }
    // }

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    // }

    // return 0;
// }

// using double pointer complete array in heap
int main()
{
    int **a;
    a = new int*[3];
    a[0] = new int[4];
    a[1] = new int[4];
    a[2] = new int[4];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<endl;
        }
    }

    return 0;


}