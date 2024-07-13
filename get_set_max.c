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

int get(struct Array arr, int index)
{
    if(index>=0 && index<arr.length)
    {
        return arr.a[index];
    }
    return -1;
}

void set(struct Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)
    {
        arr->a[index]=x;
    }
}

int max(struct Array arr)
{
    int max=arr.a[0];
    int i;
    for(i=1;i<arr.length;)
    {
        if(arr.a[i]>max)
        {
            max=arr.a[i];
        }
    }
    return max;
}

int min(struct Array arr)
{
    int min=arr.a[0];
    int i;
    for(i=1;i<arr.length;)
    {
        if(arr.a[i]<min)
        {
            min=arr.a[i];
        }
    }
    return min;
}

int sum(struct Array arr)
{
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
    {
        s+=arr.a[i];
    }
    return s;
}

float avg(struct Array arr)
{
    return (float)sum(arr)/arr.length;
}

int main()
{
    struct Array arr = {{8,10,5,14,2},10,5};
    // printf("%d\n",get(arr,4));
    // printf("%d\n",set(&arr,2,15));
    // set(&arr,2,15);
    printf("%d\n",max(arr));

    display(arr);
    return 0;
}