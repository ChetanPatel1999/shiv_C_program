#include <stdio.h>
void displayArray(int arr[], int n)
{
    int i;
    printf("array elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maxElement(int arr[], int n)
{
    // 6  8  3  23  8
    int i, max;
    max = arr[0];
    for (i = 0; i < n; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int evenCount(int arr[], int n)
{
    int i, c = 0;
    for (i = 0; i < n; i++) // 5
    {
        if (arr[i] % 2 == 0)
        {
            c++;
        }
    }
    return c;
}

void inputArray(int arr[], int n)
{
    int i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++) // 5
    {
        scanf("%d", &arr[i]);
    }
}
void main()
{
    int marks[4] = {12, 45, 67, 89};
    int ages[9] = {5, 9, 24, 10, 1, 60, 12, 3, 34};
    int score[7] = {53, 93, 24, 104, 17, 77, 89};
    int rank[2] = {5, 8};
  

    displayArray(marks, 4);
    printf("max value = %d\n", maxElement(marks, 4));
    printf("even count = %d\n", evenCount(marks, 4));
    displayArray(ages, 9);
    printf("max value = %d\n", maxElement(ages, 9));
    displayArray(score, 7);
    printf("max value = %d\n", maxElement(score, 7));
    displayArray(rank, 2);
    printf("max value = %d\n", maxElement(rank, 2));

}