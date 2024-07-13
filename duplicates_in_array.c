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

// normally
void duplicates(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.a[i]==arr.a[i+1])
        {
            printf("duplicate element is: %d\n",arr.a[i]);
        }
        
    }
    
}

// when duplicated more than twice
// void duplicates(struct Array arr)
// {
//     int last_duplicate=0;
//     int i;
//     printf("Duplicate elements are: ");
//     for(i=0;i<arr.length-1;i++)
//     {
//         if((arr.a[i]==arr.a[i+1])&&(arr.a[i]!=last_duplicate))
//         {
//             printf("%d ",arr.a[i]);
//             last_duplicate=arr.a[i];
//         }
        
//     }
    
// }

void count(struct Array arr)
{
    int i,j;
    int n=arr.length;
    for(i=0;i<n-1;i++)
    {
        if(arr.a[i]==arr.a[i+1])
        {
            j=i+1;
            while(arr.a[j]==arr.a[i])
            {
                j++;
            }
            printf("%d is appearing %d times. ",arr.a[i],j-i);
            i=j-1;
        }
    }
}

// sorted array hashing
void hashing(struct Array *arr)
{
    int h=arr->a[arr->length-1];
    int i;
    

    // int l=arr->a[0];
    
    int n=arr->length;
    int *arr3 = (int *)malloc((h+1)*sizeof(int));
    for(i=0;i<=h;i++)
    {
        arr3[i]=0;

    }

    for(i=0;i<n;i++)
    {
        arr3[arr->a[i]]++;

    }
    for(i=0;i<=h;i++)
    {
        if(arr3[i]>1)
        {
            printf("%d occurs %d times\n",i,arr3[i]);
            

        }
    }

    free(arr3);

}

// unsorted array hashing
void unsorted_hashing(struct Array *arr)
{
    int h=arr->a[0];
    int i;
    for(i=1;i<arr->length;i++)
    {
        if(arr->a[i]>h)
        {
            h=arr->a[i];
        }
    }

    int l=arr->a[0];
    for(i=1;i<arr->length;i++)
    {
        if(arr->a[i]<l)
        {
            l=arr->a[i];
        }
    }

    int n=arr->length;
    int *arr3 = (int *)malloc((h+1)*sizeof(int));
    for(i=0;i<=h;i++)
    {
        arr3[i]=0;

    }

    for(i=0;i<n;i++)
    {
        arr3[arr->a[i]]++;

    }
    for(i=0;i<=h;i++)
    {
        if(arr3[i]>1)
        {
            printf("%d occurs %d times\n",i,arr3[i]);
            

        }
    }

    free(arr3);

}

// unsorted array duplicates without hashing
void unsorted(struct Array *arr)
{
    int i,j;
    int count;
    int n=arr->length;
    for(i=0;i<n-1;i++)
    {
        count = 1;
        if(arr->a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr->a[i]==arr->a[j])
                {
                    count++;
                    arr->a[j]=-1;
                    
                }
            }
            if(count>1)
            {
                printf("%d times %d\n", count,arr->a[i]);
            }
            
        }
        
    }
}

int main()
{
    struct Array arr = {{3,7,4,9,4,6,1,6,2,6},10,10};
    // duplicates(arr);
    // count(arr);
    // display(arr);
    // hashing(&arr);
    // unsorted_hashing(&arr);
    unsorted(&arr);

    return 0;
}