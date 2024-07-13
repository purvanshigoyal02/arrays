#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int a[11]; //int type pointer
    int size; //size of array
    int length; //number of elements inside array i.e length
};

void missing(struct Array *arr)
{
    int l=arr->a[0];
    int h=arr->a[arr->length-1];
    int diff = l-0;
    printf("Missing elements are: ");
    for(int i=0;i<arr->length;i++)
    {
        if((arr->a[i]-i)!=diff)
        {
            while(diff<arr->a[i]-i)
            {
                printf("%d ",i+diff);
                diff++;
            }
        }
    }
}

int main()
{
    
    struct Array arr={{6,7,8,9,11,12,15,16,17,18,19},11,11};

    missing(&arr);
    return 0;
    

}