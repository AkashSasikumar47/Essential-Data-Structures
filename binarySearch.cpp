#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x, int l, int h)
{
    while (l <= h)
    {
        int m = l + (h - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            h = m - 1;
    }
    return -1;
}

int main()
{
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search for: ";
    cin >> x;

    int result = binarySearch(arr, n, x, 0, n - 1);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}