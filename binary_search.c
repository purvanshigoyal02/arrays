#include <stdio.h>
#include <stdlib.h>


struct Array
{
    int a[15]; //int type pointer
    int size; //size of array
    int length; //number of elements inside array i.e length
};
// normal approach
int binarysearch(struct Array arr, int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.a[mid])
        {
            return mid;
        }
        else if(key<arr.a[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    return -1;
}
// recurssive approach
int recBS(int a[], int l, int h, int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            return mid;
        }
        else if(key<a[mid])
        {
            return recBS(a,l,mid-1,key);
        }
        else
        {
            return recBS(a,mid+1,h,key);
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,15};
    int key=18;
    printf("%d is found at index: %d",key,binarysearch(arr,key));
    printf("\n%d is found at index: %d",key,recBS(arr.a,0,arr.length-1,key));
    return 0;
}