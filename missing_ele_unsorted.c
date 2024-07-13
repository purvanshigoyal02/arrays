#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int a[10]; //int type pointer
    int size; //size of array
    int length; //number of elements inside array i.e length
};

void missing(struct Array *arr)
{
    int h=arr->a[0];
    int i;
    for(i=1;i<arr->length;i++)
    {
        if(arr->a[i]>h)
        {
            h=arr->a[i];
        }
    }

    int l=arr->a[0];
    for(i=1;i<arr->length;i++)
    {
        if(arr->a[i]<l)
        {
            l=arr->a[i];
        }
    }

    int n=arr->length;
    int *arr3 = (int *)malloc((h+1)*sizeof(int));
    for(i=0;i<n;i++)
    {
        arr3[i]=0;

    }

    for(i=0;i<n;i++)
    {
        arr3[arr->a[i]]++;

    }
    for(i=l;i<=h;i++)
    {
        if(arr3[i]==0)
        {
            printf("%d ",i);

        }
    }

    free(arr3);

}

int main()
{
    
    struct Array arr={{3,7,4,9,12,6,1,11,2,10},10,10};
    // struct Array *arr1;

    missing(&arr);
    
    return 0;
    

}