#include <iostream>
using namespace std;
void frequency_of_elements(int *arr, int n)
{
    int current_val = arr[0];
    int count_current = 1;
    for (int j = 1; j <=n; j++)
    {
        if (arr[j] == current_val)
        {

            count_current++;
        }
        else
        {
            cout << current_val << ":" << count_current << endl;
            current_val = arr[j];
            count_current = 1;
        }
    }
    // cout << current_val << ":" << count_current << endl;
}
int main()
{
    int *arr = new int[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    frequency_of_elements(arr, n);

    delete[] arr;
    return 0;
}