#include <bits/stdc++.h>
using namespace std;

int binarySearchRecusive(int arr[], int low, int high, int searchElement)
{
    // base case
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (arr[mid] == searchElement)
        return mid;
    if (arr[mid] > searchElement)
        return binarySearchRecusive(arr, mid + 1, high, searchElement);
    if (arr[mid] < searchElement)
        return binarySearchRecusive(arr, low, mid - 1, searchElement);

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchElement = 3;
    int position = binarySearchRecusive(arr, 0, size - 1, searchElement);
    cout << position;
    return 0;
}