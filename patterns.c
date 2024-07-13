#include <stdio.h>
#include <stdlib.h>

void rect_star(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

void right_angle_triangle(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void right_angle_triangle_num(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

void right_angle_triangle_num_II(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}

void inverted_right(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void inverted_right_num(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("%d ",n-j+1);
        }
        printf("\n");
    }
}

void star_pyramid(int n)
{
    int i,j;
    for(i=0;i<n;i++) //printing rows
    {
        for(j=0;j<n-i-1;j++) //for printing spaces before stars in each row
        {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++) //for printing stars
        {
            printf("*");

        }
        for(j=0;j<n-i-1;j++) //prinitng spaces after star in each row
        {
            printf(" ");
        }
        printf("\n");

    }
}

int main()
{
    int n=5;
    // rect_star(n);
    // right_angle_triangle(n);
    // right_angle_triangle_num(n);
    // right_angle_triangle_num_II(n);
    // inverted_right(n);
    // inverted_right_num(n);
    star_pyramid(n);

    return 0;
}