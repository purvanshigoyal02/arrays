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

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

// inserting in a sorted array
void insert(struct Array *arr, int x)
{
    int i=arr->length-1;
    while(arr->a[i]>x)
    {
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=x;
    arr->length++;
}


// check whether list is sorted or not
int _sorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.a[i]>arr.a[i+1])
        {
            return false; //gives -1
        }
    }
    return true; //gives 1
}

// -ve on left and +ve on right
void leftright(struct Array *arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->a[i]<0)
        {
            i++;
        }
        while(arr->a[i]>0)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr->a[i],&arr->a[j]);
        }
    }
}

int main()
{
    struct Array arr = {{-6,3,-8,10,5,-7,-9,12,-4,2},10,10};
    // insert(&arr,18);
    // printf("%d\n",_sorted(arr));
    leftright(&arr);

    display(arr);
    return 0;
}