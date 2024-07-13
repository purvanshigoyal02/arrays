
// max and min element in array

#include <stdio.h>
#include <stdlib.h>
 

// int max(int a[], int n)
// {
//     int max=a[0],i;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     return max;
// }

// int min(int a[], int n)
// {
//     int min=a[0],i;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]<min)
//         {
//             min=a[i];
//         }
//     }
//     return min;
// }

// int main()
// {
//     int a[]={10,5,7,3,11,22};
//     int n=6;
//     printf("maximum element: %d\n",max(a,n));
//     printf("minimum element: %d\n",min(a,n));
//     return 0;
// }



// reverse an array

// void reverse(int a[], int n)
// {
//     int i;
//     for(i=n-1;i>=0;i--)
//     {
//         printf("%d ",a[i]);
//     }
// }

// int main()
// {
//     int a[]={1,2,3,4,5,6};
//     int n=6;
//     reverse(a,n);
//     return 0;
// }

// maximum subarray

void maxarray(int *n, int size)
{
    int a[size],sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+n[i];
        if(sum=__INT_MAX__)
        {
            for(int j=0;j<size;j++)
            {
                a[j]=n[i];
                printf("%d ",a[j]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int a[]={1,3,7,-5,-1};
    int n=5;
    maxarray(a,n);
    return 0;
}