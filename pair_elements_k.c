#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Array
{
    int a[10]; //int type pointer
    int size; //size of array
    int length; //number of elements inside array i.e length
};

void display(struct Array arr)
{
    int i;

    printf("\n elements are: \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ", arr.a[i]);
    }

}

// without using hashing unsorted 
// void sum(struct Array *arr, int k)
// {
//     int i,j;
//     int n=arr->length-1;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(arr->a[i]+arr->a[j]==k)
//             {
//                 printf("%d + %d = %d\n",arr->a[i],arr->a[j],k);
//             }
//         }
//     }
// }

// using hashing unsorted
// void sum(struct Array *arr, int k)
// {
//     int h=arr->a[0];
//     int i;
//     for(i=1;i<arr->length;i++)
//     {
//         if(arr->a[i]>h)
//         {
//             h=arr->a[i];
//         }
//     }

//     int l=arr->a[0];
//     for(i=1;i<arr->length;i++)
//     {
//         if(arr->a[i]<l)
//         {
//             l=arr->a[i];
//         }
//     }

//     int n=arr->length;
//     int *arr3 = (int *)malloc((h+1)*sizeof(int));
//     for(i=0;i<=h;i++)
//     {
//         arr3[i]=0;

//     }

    

//     for(i = 0; i < n; i++)
//     {
//         int complement = k - arr->a[i];
//         if(complement >= 0 && complement <= h && arr3[complement] != 0)
//         {
//             printf("%d + %d = %d\n", arr->a[i], complement, k);
//         }
//         arr3[arr->a[i]]++;
//     }

//     free(arr3);

// }

// normal method for sorted array
// void sum(struct Array *arr, int k)
// {
//     int h=arr->a[arr->length-1];
//     int i;
    

//     int l=arr->a[0];
    

//     int n=arr->length;
//     int *arr3 = (int *)malloc((h+1)*sizeof(int));
//     for(i=0;i<=h;i++)
//     {
//         arr3[i]=0;

//     }

    

//     for(i = 0; i < n; i++)
//     {
//         int complement = k - arr->a[i];
//         if(complement >= 0 && complement <= h && arr3[complement] != 0)
//         {
//             printf("%d + %d = %d\n", arr->a[i], complement, k);
//         }
//         arr3[arr->a[i]]++;
//     }

//     free(arr3);

// }

// normal way for sorted array
void sum(struct Array arr, int k)
{
    int i=0,j;
    int n = arr.length;
    j=n-1;
    while(i<j)
    {
        if(arr.a[i]+arr.a[j]==k)
        {
            printf("%d+%d=%d\n",arr.a[i],arr.a[j],k);
            i++;
            j--;
        }
        else if(arr.a[i]+arr.a[j]<k)
        {
            i++;
        }
        else 
        {
            j--;
        }
    }
    
}


int main()
{
    struct Array arr = {{1,3,4,5,6,8,9,10,12,14},10,10};
    int s=10;
    sum(arr,s);

    return 0;
}