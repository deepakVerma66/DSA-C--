#include <iostream>
using namespace std;
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    // Swap Alternate elements
    int arr[] = {20, 33, 56, 11, 45, 67, 29, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before swapping:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    swapAlternate(arr, n);
    cout << endl
         << "Array after swapping:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}