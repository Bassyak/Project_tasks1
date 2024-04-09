#include <iostream>

void sortArray(int arr[], int len, bool descending = true)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if ((descending && arr[j] < arr[j + 1]) || (!descending && arr[j] > arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n, false);
    printArray(arr, n);
    return 0;
}