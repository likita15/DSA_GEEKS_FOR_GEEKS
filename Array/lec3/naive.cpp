// moving zeros to the end:o(n^2)

#include <iostream>
using namespace std;
void movezeroes(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {

            for (int j = i + 1; j < n; j++)
            {

                if(arr[j] != 0)
                {                                                    //searching for the first non-zero element.
                    swap(arr[i] , arr[j]);                                          //swaping the element with the zero inorder to move the zeros to the right.
                    break;                                                          //breaking the loop after finding the non-zero element.
                }
            }
        }
    }
}
int main()
{
    int n; cin>> n;

    int arr[1000];
    
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    movezeroes(arr , n);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}