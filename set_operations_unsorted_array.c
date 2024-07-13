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

struct Array * Union(struct Array *arr1, struct Array *arr2)
{
    int i,j;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    int k=0;
    int key;

    for(i=0;i<arr1->length;i++)
    {
        arr3->a[k]=arr1->a[i];
        k++;
    }

    for(j=0;i<arr2->length;j++)
    {
        for(i=0;i<arr1->length;i++)
        {
            if(arr2->a[j]==arr1->a[i])
            {
                j++;
            }
            else
            {
                arr3->a[k]=arr2->a[j];
                k++;
            }
        }
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

int main()
{
    struct Array arr1 = {{3,5,10,4,6},10,5};
    struct Array arr2 = {{12,4,7,2,5},10,5};
    struct Array *arr3;

    arr3=Union(&arr1,&arr2);

    display(*arr3);
    return 0;
}