#include <stdio.h>
#include <stdlib.h>


struct Array
{
    int a[5]; //int type pointer
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

// creating an extra auxillary array
void reverse(struct Array *arr)
{
    int *b;
    int i,j;
    b=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        b[j]=arr->a[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->a[i]=b[i];
    }
}

// using swap technique
void reverse_method(struct Array *arr)
{
    int temp,i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        temp=arr->a[i];
        arr->a[i]=arr->a[j];
        arr->a[j]=temp;
    }
    /* data */
};


int main()
{
    struct Array arr = {{8,10,5,14,2},10,5};
    // reverse(&arr);
    reverse_method(&arr);
    display(arr);
    return 0;
}