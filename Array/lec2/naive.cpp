//FINDING THE SECOND LARGEST NUMBER IN THE ARRAY: TWO CYCLES OF THE LOOP
#include<iostream>

using namespace std ;
int getlargest(int*arr , int n){
    int largest = 0;
    for(int i = 1 ; i < n  ; i++)
    {
        if(arr[i] > arr[largest])
        largest = i ; 
    }
    return largest ; 

}
int getSecondLargest(int*arr , int n){
    int largest  = getlargest(arr , n);
    int smax = -1;
    
    for(int i = 0;i < n ; i++)
    {
        if(arr[i] != arr[largest]){
            if(smax == -1)
            {
                smax = i ; 
            }
            else if(arr[i]>arr[smax])
            {
                smax = i;

            }
            
        }
    }
    return smax ; 
}
int main()
{

    int n = 8;
    int arr[] = {5,4,8,26,9,12,11,3};
    cout<<arr[getSecondLargest(arr , n)]<<endl;

return 0;
}