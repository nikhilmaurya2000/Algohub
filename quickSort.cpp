//Quick Sort in C++

#include <stdlib.h>
#include <stdio.h>

int partition(int a[], int p, int r)
{
    
    int pivot = a[r]; //Last element as pivot
    int i = p - 1;
    for (int j = p; j < r; ++j)
    {
        if (a[j] <= pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int t = a[i + 1];
    a[i + 1] = a[r];
    a[r] = t;
    return i + 1;
}

//Quick-Sort Algorithm
void quick_sort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = partition(a, p, r);

        quick_sort(a, p, q - 1);
        quick_sort(a, q + 1, r);
    }
}

int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int *array = (int *)malloc(N * sizeof(int));


    printf("Enter elements to be sorted:\n"); //Getting inputs from the user
    for (int i = 0; i < N; ++i)
        scanf("%d", &array[i]);

    quick_sort(array, 0, N - 1);

    
    printf("The sorted array using Quick Sort is: ");
    for (int j = 0; j < N; ++j)
        printf("%d ", array[j]);
    printf("\n");
}
