#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int a[11]; //int type pointer
    int size; //size of array
    int length; //number of elements inside array i.e length
};

// // if first n natural nos
// void missing(struct Array *arr)
// {
//     int n=arr->a[arr->length-1];
//     int sum = n*(n+1)/2;
//     int s=0;
//     int diff;
//     for(int i=0;i<arr->length;i++)
//     {
//         s=s+arr->a[i];
//     }

//     if(sum==s)
//     {
//         printf("No missing element.\n");
//     }
//     else 
//     {
//         diff = sum-s;

//     }
//     printf("Missing element is %d\n",diff);

// }

// when first n natural nos not given
void missing(struct Array *arr)
{
    int l=arr->a[0];
    int h=arr->a[arr->length-1];
    int diff = l-0;
    for(int i=0;i<arr->length;i++)
    {
        if((arr->a[i]-i)!=diff)
        {
            printf("Missing element is %d\n.",i+diff);
            break;
        }
    }
}

int main()
{
    // struct Array arr={{1,2,3,4,5,6,8,9,10,11,12},11,11};
    struct Array arr={{6,7,8,9,10,11,13,14,15,16,17},11,11};

    missing(&arr);
    return 0;
    

}