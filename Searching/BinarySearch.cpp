// Searching for an element with binary Search and returning the position

#include <bits/stdc++.h>
using namespace std;

// Binary search function
int binarySearch(int arr[], int searchElement, int size)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == searchElement)
            return mid;
        if (arr[mid] > searchElement)
            low = mid + 1;
        if (arr[mid] < searchElement)
            high = mid - 1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int searchElement = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    int position = binarySearch(arr, searchElement, size);
    cout << position;
    return 0;
}