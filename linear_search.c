#include <stdio.h>
#include <stdlib.h>


struct Array
{
    int a[5]; //int type pointer
    int size; //size of array
    int length; //number of elements inside array i.e length
};

int linearsearch(struct Array arr, int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.a[i])
        {
            return i;
        }
        
    }
    return -1;

}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int transposition(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->a[i])
        {
            swap(&arr->a[i],&arr->a[i-1]);
            return i-1;
        }
    }
}

int movefront(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->a[i])
        {
            swap(&arr->a[i],&arr->a[0]);
            return 0;
        }
    }
}

int main()
{
    struct Array arr = {{8,10,5,14,2},5,5};
    // int x=;
    printf("linear index = %d",linearsearch(arr,5));
    printf("\ntranspose index = %d",transposition(&arr,5));
    printf("\ntranspose index = %d",movefront(&arr,5));
    return 0;

   
}