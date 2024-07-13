#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Array
{
    int a[10]; //int type pointer
    int size; //size of array
    int length; //number of elements inside array i.e length
};

void display(struct Array arr3)
{
    int i;

    printf("\n elements are: \n");
    for(i=0;i<arr3.length;i++)
    {
        printf("%d ", arr3.a[i]);
    }

}

struct Array * merge(struct Array *arr1, struct Array *arr2)
{
    int i,j;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    i=0;
    j=0;
    int k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            arr3->a[k++]=arr1->a[i++];
        }
        else{
            arr3->a[k++]=arr2->a[j++];
        }
    }

    for(;i<arr1->length;i++)
    {
        arr3->a[k++]=arr1->a[i];
    }
    for(;j<arr2->length;j++)
    {
        arr3->a[k++]=arr2->a[j++];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
}

int main()
{
    struct Array arr1 = {{3,8,16,20,25},10,5};
    struct Array arr2 = {{4,10,12,22,23},10,5};
    struct Array *arr3;

    arr3=merge(&arr1,&arr2);

    display(*arr3);
    return 0;
}