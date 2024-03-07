#include<iostream>
using namespace std ;
void frequency_of_elements(int*arr, int n){
    int freq = 1 ; 
    int i = 1; 
    while(i < n) {
        while(i<n and arr[i] == arr[i-1]){
            freq++;i++;
        }
        cout<<arr[i-1]<<":"<<freq<<endl;
        i++;freq = 1;
    }
    if(n == 1 and arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<":"<<freq<<endl;
    }
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