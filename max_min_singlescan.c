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

// void maxmin(struct Array *arr)
// {
//     int min = arr->a[0];
//     int max = arr->a[0];

//     int i;
//     int n = arr->length;
//     for(i=1;i<n;i++)
//     {
//         if(arr->a[i]<min)
//         {
//             min = arr->a[i];
//         }
//         else if(arr->a[i]>max)
//         {
//             max = arr->a[i];
//         }
//     }

    // printf("min = %d\n",min);
    // printf("max = %d\n",max);
// }

void maxmin(struct Array *arr)
{
    int min=arr->a[0];
    int i;
    for(i=1;i<arr->length;i++)
    {
        if(arr->a[i]<min)
        {
            min=arr->a[i];
        }
    }

    int max=arr->a[0];
    // int i;
    for(i=1;i<arr->length;i++)
    {
        if(arr->a[i]>max)
        {
            max=arr->a[i];
        }
    }

    printf("min = %d\n",min);
    printf("max = %d\n",max);
}

int main()
{
    struct Array arr = {{5,8,3,9,6,2,10,7,-1,4},10,10};
    maxmin(&arr);
    return 0;
}