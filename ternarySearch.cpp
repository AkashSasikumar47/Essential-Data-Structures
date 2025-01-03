#include <iostream>
using namespace std;

int ternarySearch(int l, int r, int key, int arr[])
{
    if (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == key)
            return mid1;

        if (arr[mid2] == key)
            return mid2;

        if (key < arr[mid1])
            return ternarySearch(l, mid1 - 1, key, arr);
        else if (key > arr[mid2])
            return ternarySearch(mid2 + 1, r, key, arr);
        else
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
    }

    return -1;
}

int main()
{
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the sorted elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search for: ";
    cin >> x;

    int result = ternarySearch(0, n - 1, x, arr);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}