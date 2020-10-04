//C program to implement Binary Search sorting algorithm
#include<stdio.h>
void main()
{
    int a[5],i,search,first,last,middle,c = 0;
    printf("\nAditya Gor 190303105006\n");
    printf("enter 5 elements in ascending order\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter number you want to search\t");
    scanf("%d",&search);
    first = 0;
    last = 4;
    middle = (first + last)/2;
    while(first <= last)
    {
        if (a[middle] < search)
        {
            first = middle + 1;
        }
        else if (a[middle] == search)
        {
            printf("\nnumber is loacted at %dth position",middle + 1);
            c++;
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if (c == 0)
    {
        printf("\nnumber not found");
    }
}