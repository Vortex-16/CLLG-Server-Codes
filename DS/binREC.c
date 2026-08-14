#include <stdio.h>

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int a[], int n, int item)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == item)
            return mid;
        else if (item > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int linear_Search(int a[], int n, int item)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == item)
            c++;
        return 1;
    }
    return 0;
    printf("The Position Of The item is: %d", c);
}
int binarySearchRecur(int a[], int item, int hi, int lo)
{
    int flag = 0, c = 1;
    int mid = (hi + lo) / 2;
    if (a[mid] == item)
    {
        printf("The Element is Found at: %d", c);
        {
            c++;
            return 1;
        }
    }
    else if (a[mid] > item)
    {
        c++;
        return binarySearchRecur(a, item, mid - 1, lo);
    }
    else if (a[mid] < item)
    {
        c++;
        return binarySearchRecur(a, item, hi, mid + 1);
    }
    else
        return 0;
}

int main()
{
    int arr[100], n, item, index, cs;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int hi = n - 1, lo = 0;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    printf("----------------------------------------------\n");
    printf("Press 1: For Linear Search\n");
    printf("Press 2: For Binary Search(Recursion)\n");
    printf("Press 3: For Binary Search\n");
    printf("----------------------------------------------\n");
    printf("Enter the condition which you want to perform: ");
    scanf("%d", &cs);
    printf("Enter the element to search: ");
    scanf("%d", &item);
    switch (cs)
    {
    case 3:
        binarySearch(arr, n, item);
        break;
    case 2:
        /* code */
        binarySearchRecur(arr, item, hi, lo);
        break;
    case 1:
        linear_Search(arr, n, item);
        break;
    default:
        printf("Enter valid choise:\n");
    }

    return 0;
}
