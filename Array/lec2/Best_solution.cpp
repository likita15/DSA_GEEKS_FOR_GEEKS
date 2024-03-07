#include <iostream>
using namespace std;
int getSecondLargest(int *arr, int n)
{
    int largest = 0, slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            slargest = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (slargest == -1 || arr[i] > arr[slargest])
            {
                slargest = i;
            }
        }
    }
    return slargest;
}
int main()
{
    int n = 8;
    int arr[] = {5, 4, 8, 26, 9, 12, 11, 3};
    cout << arr[getSecondLargest(arr, n)] << endl;
    return 0;
}