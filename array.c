#include <stdio.h>
#include <stdlib.h>


struct Array
{
    int *a; //int type pointer
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

void add(struct Array *arr, int x)
{
    if(arr->length<arr->size)
    {
        arr->a[arr->length++]=x;
    }

}

void insert(struct Array *arr, int index, int x)
{
    if(index>=0 && index<=arr->length)
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->a[i]=arr->a[i-1];
        }
        arr->a[index]=x;
        arr->length++;
    }
}

void delete(struct Array *arr, int index)
{
    int x= arr->a[index],i;
    if(index>=0 && index<=arr->length)
    {
        for(i=index;i<arr->length-1;i++)
        {
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;
    }
    
}

int main()
{
    struct Array arr;
    int n,i;
    printf("enter size of array: ");
    scanf("%d",&arr.size);
    arr.a = (int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("\n enter n: ");
    scanf("%d",&n);

    printf("\nenter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.a[i]);
    }
    arr.length = n;

    // add(&arr,10);
    // insert(&arr,4,15);
    delete(&arr,4);

    display(arr);
    return 0;
}