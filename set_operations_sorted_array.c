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

struct Array * Union(struct Array *arr1, struct Array *arr2)
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
        else if(arr2->a[j]<arr1->a[i]){
            arr3->a[k++]=arr2->a[j++];
        }
        else
        {
            arr3->a[k++]=arr1->a[i++];
            j++;

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
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

struct Array * Intersection(struct Array *arr1, struct Array *arr2)
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
            i++;
            j++;
        }
        else if(arr2->a[j]<arr1->a[i]){
            i++;
            j++;
        }
        else
        {
            arr3->a[k++]=arr1->a[i++];
            j++;

        }
    }

    // for(;i<arr1->length;i++)
    // {
    //     arr3->a[k++]=arr1->a[i];
    // }
    // for(;j<arr2->length;j++)
    // {
    //     arr3->a[k++]=arr2->a[j++];
    // }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

struct Array * Difference(struct Array *arr1, struct Array *arr2)
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
        else if(arr2->a[j]<arr1->a[i]){
            j++;
        }
        else
        {
            i++;
            j++;

        }
    }

    for(;i<arr1->length;i++)
    {
        arr3->a[k++]=arr1->a[i];
    }
    // for(;j<arr2->length;j++)
    // {
    //     arr3->a[k++]=arr2->a[j++];
    // }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}


int main()
{
    struct Array arr1 = {{2,6,10,15,25},10,5};
    struct Array arr2 = {{3,6,7,15,20},10,5};
    struct Array *arr3;

    arr3=Difference(&arr1,&arr2);

    display(*arr3);
    return 0;
}